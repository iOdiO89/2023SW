#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"
#include <cstdio>

class Logout {
public:
    void logout(User& user);
    void writeToFile(User& user, FILE* out_fp);
};

#endif