#ifndef LOGIN_H
#define LOGIN_H

using namespace std;

#include "Member.h"
#include <cstdio>

class Login {
public:
    bool login(Member& Member, const string& id, const string& password);
    void writeToFile(Member& Member, FILE* out_fp);
};

#endif