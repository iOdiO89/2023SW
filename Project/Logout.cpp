#include "Logout.h"

void Logout::logout(User& user) {
    if (user.isLoggedIn()) {
        user.setLoggedIn(false);
    }
}

void Logout::writeToFile(User& user, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s\n", user.getId().c_str());
        fflush(out_fp);
    }
}
