#include "GeneralUser.h"

using namespace std;

GeneralUser::GeneralUser(const string& name, const string& socialNumber, const string& id, const string& password)
    : User(id, password, UserType::General), name(name), socialNumber(socialNumber) {}

UserType GeneralUser::getUserType() const {
    return UserType::General;
}

void GeneralUser::withdraw() {
    loggedIn = false;
}

bool GeneralUser::isActive() const {
    return loggedIn;
}

string GeneralUser::getName() const {
    return name;
}

string GeneralUser::getSocialNumber() const {
    return socialNumber;
}
