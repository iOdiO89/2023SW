#include "WithdrawalUI.h"
#include <iostream>

using namespace std;

void WithdrawalUI::start(User& user, Withdrawal& w, FILE* out_fp) {
    w.executeWithdrawal(user);
    cout << "ȸ�� Ż�� �Ϸ�Ǿ����ϴ�." << endl;
    w.writeToFile(user, out_fp);
}
