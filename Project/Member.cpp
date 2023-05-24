#include "Member.h"

using namespace std;

Member::Member(const string& id, const string& password, UserType MemberType)
    : id(id), password(password), loggedIn(false), MemberType(MemberType) {}

string Member::getId() const {
    return id;
}

string Member::getPassword() const {
    return password;
}

bool Member::isLoggedIn() const {
    return loggedIn;
}

void Member::setLoggedIn(bool loggedIn) {
    this->loggedIn = loggedIn;
}
