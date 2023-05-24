#include "WithdrawalUI.h"
#include <iostream>

using namespace std;

void WithdrawalUI::start(Member& Member, Withdrawal& w, FILE* out_fp) {
    w.executeWithdrawal(Member);
    cout << "회원 탈퇴가 완료되었습니다." << endl;
    w.writeToFile(Member, out_fp);
}
