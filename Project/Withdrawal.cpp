#include "Withdrawal.h"

void Withdrawal::executeWithdrawal(User& user) {
    user.withdraw();
}

void Withdrawal::writeToFile(User& user, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s\n", user.getId().c_str());
        fflush(out_fp);
    }
}
