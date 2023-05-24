#include "Login.h"

bool Login::login(Member& Member, const std::string& id, const std::string& password) {
    if (Member.getId() == id && Member.getPassword() == password && Member.isActive()) {
        Member.setLoggedIn(true);
        return true;
    }
    return false;
}

void Login::writeToFile(Member& Member, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s %s\n", Member.getId().c_str(), Member.getPassword().c_str());
        fflush(out_fp);
    }
}
