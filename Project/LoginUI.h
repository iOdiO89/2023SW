#ifndef LOGINUI_H
#define LOGINUI_H

using namespace std;

#include "Login.h"
#include <cstdio>

class LoginUI {
public:
    void start(User& user, Login& l, const string& id, const string& password, FILE* out_fp);
};

#endif 