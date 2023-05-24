#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <cstdio>

class LogoutUI {
public:
    void start(User& user, Logout& lo, FILE* out_fp);
};

#endif 