#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "User.h"
#include <cstdio>

class Withdrawal {
public:
    void executeWithdrawal(User& user);
    void writeToFile(User& user, FILE* out_fp);
};

#endif