#ifndef LOGOUT_H
#define LOGOUT_H

#include "Member.h"
#include <cstdio>

class Logout {
public:
    void logout(Member& Member);
    void writeToFile(Member& Member, FILE* out_fp);
};

#endif