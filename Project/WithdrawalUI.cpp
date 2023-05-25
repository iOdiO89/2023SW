#include "WithdrawalUI.h"

void WithdrawalUI::clickWDButton(Member* currentMember) {
	Withdrawal withdrawal;
	string ID = withdrawal.withdrawalMem(currentMember); // 탈퇴하려는 회원의 ID 받아오기

	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "1.2. 회원탈퇴" << endl;
		writeFile << "> " + ID << endl;
		writeFile.close();
	}
}
