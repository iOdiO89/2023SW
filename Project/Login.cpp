#include "Login.h"

bool Login::login(User& user, const std::string& id, const std::string& password) {
    if (user.getId() == id && user.getPassword() == password && user.isActive()) {
        user.setLoggedIn(true);
        return true;
    }
    return false;
}

void Login::writeToFile(User& user, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "%s %s\n", user.getId().c_str(), user.getPassword().c_str());
        fflush(out_fp);
    }
}
