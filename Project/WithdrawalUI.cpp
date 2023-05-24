#include "WithdrawalUI.h"
#include <iostream>

using namespace std;

void WithdrawalUI::start(User& user, Withdrawal& w, FILE* out_fp) {
    w.executeWithdrawal(user);
    cout << "회원 탈퇴가 완료되었습니다." << endl;
    w.writeToFile(user, out_fp);
}
