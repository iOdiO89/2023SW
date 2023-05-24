#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Member.h"
#include <cstdio>

class Withdrawal {
public:
    void executeWithdrawal(Member& Member);
    void writeToFile(Member& Member, FILE* out_fp);
};

#endif