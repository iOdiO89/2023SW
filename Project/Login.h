#ifndef LOGIN_H
#define LOGIN_H

using namespace std;

#include "User.h"
#include <cstdio>

class Login {
public:
    bool login(User& user, const string& id, const string& password);
    void writeToFile(User& user, FILE* out_fp);
};

#endif