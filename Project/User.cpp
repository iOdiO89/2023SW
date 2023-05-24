#include "User.h"

using namespace std;

User::User(const string& id, const string& password, UserType userType)
    : id(id), password(password), loggedIn(false), userType(userType) {}

string User::getId() const {
    return id;
}

string User::getPassword() const {
    return password;
}

bool User::isLoggedIn() const {
    return loggedIn;
}

void User::setLoggedIn(bool loggedIn) {
    this->loggedIn = loggedIn;
}
