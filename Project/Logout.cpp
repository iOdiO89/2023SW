#include "Logout.h"

void Logout::logout(Member& Member) {
    if (Member.isLoggedIn()) {
        Member.setLoggedIn(false);
    }
}

void Logout::writeToFile(Member& Member, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s\n", Member.getId().c_str());
        fflush(out_fp);
    }
}
