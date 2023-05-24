#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::start(User& user, Logout& lo, FILE* out_fp) {
    lo.logout(user);
    cout << "로그아웃 되었습니다." << endl;
    lo.writeToFile(user, out_fp);
}
