#include "CompanyUser.h"

using namespace std;

CompanyUser::CompanyUser(const string& companyName, const string& businessNumber, const string& id, const string& password)
    : User(id, password, UserType::Company), companyName(companyName), businessNumber(businessNumber) {}

UserType CompanyUser::getUserType() const {
    return UserType::Company;
}

void CompanyUser::withdraw() {
    loggedIn = false;
}

bool CompanyUser::isActive() const {
    return loggedIn;
}

string CompanyUser::getCompanyName() const {
    return companyName;
}

string CompanyUser::getBusinessNumber() const {
    return businessNumber;
}
