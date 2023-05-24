#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::start(Member& Member, Logout& lo, FILE* out_fp) {
    lo.logout(Member);
    cout << "로그아웃 되었습니다." << endl;
    lo.writeToFile(Member, out_fp);
}
