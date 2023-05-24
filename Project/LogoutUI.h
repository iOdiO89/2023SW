#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <cstdio>

class LogoutUI {
public:
    void start(Member& Member, Logout& lo, FILE* out_fp);
};

#endif 