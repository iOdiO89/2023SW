#ifndef WITHDRAWALUI_H
#define WITHDRAWALUI_H

#include "Withdrawal.h"
#include <cstdio>

class WithdrawalUI {
public:
    void start(Member& Member, Withdrawal& w, FILE* out_fp);
};

#endif 