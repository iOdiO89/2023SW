#include "LoginUI.h"
#include <iostream>

using namespace std;

void LoginUI::start(Member& Member, Login& l, const std::string& id, const std::string& password, FILE* out_fp) {
    if (l.login(Member, id, password)) {
        cout << "로그인에 성공하였습니다." << endl;
        l.writeToFile(Member, out_fp);
    }
    else {
        cout << "로그인에 실패하였습니다." << endl;
    }
}