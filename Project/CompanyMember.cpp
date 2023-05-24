#include "CompanyMember.h"

using namespace std;

CompanyMember::CompanyMember(const string& companyName, const string& businessNumber, const string& id, const string& password)
    : Member(id, password, UserType::Company), companyName(companyName), businessNumber(businessNumber) {}

UserType CompanyMember::getMemberType() const {
    return UserType::Company;
}

void CompanyMember::withdraw() {
    loggedIn = false;
}

bool CompanyMember::isActive() const {
    return loggedIn;
}

string CompanyMember::getCompanyName() const {
    return companyName;
}

string CompanyMember::getBusinessNumber() const {
    return businessNumber;
}
