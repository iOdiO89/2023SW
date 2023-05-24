#include "LoginUI.h"
#include <iostream>

using namespace std;

void LoginUI::start(User& user, Login& l, const std::string& id, const std::string& password, FILE* out_fp) {
    if (l.login(user, id, password)) {
        cout << "�α��ο� �����Ͽ����ϴ�." << endl;
        l.writeToFile(user, out_fp);
    }
    else {
        cout << "�α��ο� �����Ͽ����ϴ�." << endl;
    }
}