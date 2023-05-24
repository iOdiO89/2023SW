#include "GeneralMember.h"

using namespace std;

GeneralMember::GeneralMember(const string& name, const string& socialNumber, const string& id, const string& password)
    : Member(id, password, UserType::General), name(name), socialNumber(socialNumber) {}

UserType GeneralMember::getMemberType() const {
    return UserType::General;
}

void GeneralMember::withdraw() {
    loggedIn = false;
}

bool GeneralMember::isActive() const {
    return loggedIn;
}

string GeneralMember::getName() const {
    return name;
}

string GeneralMember::getSocialNumber() const {
    return socialNumber;
}
