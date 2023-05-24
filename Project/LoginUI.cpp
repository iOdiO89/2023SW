#include "LoginUI.h"
#include <iostream>

using namespace std;

void LoginUI::start(Member& Member, Login& l, const std::string& id, const std::string& password, FILE* out_fp) {
    if (l.login(Member, id, password)) {
        cout << "�α��ο� �����Ͽ����ϴ�." << endl;
        l.writeToFile(Member, out_fp);
    }
    else {
        cout << "�α��ο� �����Ͽ����ϴ�." << endl;
    }
}