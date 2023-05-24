#ifndef WITHDRAWALUI_H
#define WITHDRAWALUI_H

#include "Withdrawal.h"
#include <cstdio>

class WithdrawalUI {
public:
    void start(User& user, Withdrawal& w, FILE* out_fp);
};

#endif 