#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::start(User& user, Logout& lo, FILE* out_fp) {
    lo.logout(user);
    cout << "�α׾ƿ� �Ǿ����ϴ�." << endl;
    lo.writeToFile(user, out_fp);
}
