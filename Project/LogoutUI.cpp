#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::start(Member& Member, Logout& lo, FILE* out_fp) {
    lo.logout(Member);
    cout << "�α׾ƿ� �Ǿ����ϴ�." << endl;
    lo.writeToFile(Member, out_fp);
}
