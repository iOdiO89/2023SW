#include "WithdrawalUI.h"
#include <iostream>

using namespace std;

void WithdrawalUI::start(Member& Member, Withdrawal& w, FILE* out_fp) {
    w.executeWithdrawal(Member);
    cout << "ȸ�� Ż�� �Ϸ�Ǿ����ϴ�." << endl;
    w.writeToFile(Member, out_fp);
}
