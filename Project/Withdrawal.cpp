#include "Withdrawal.h"

void Withdrawal::executeWithdrawal(Member& Member) {
    Member.withdraw();
}

void Withdrawal::writeToFile(Member& Member, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s\n", Member.getId().c_str());
        fflush(out_fp);
    }
}
