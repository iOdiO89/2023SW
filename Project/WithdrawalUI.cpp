#include "WithdrawalUI.h"

void WithdrawalUI::clickWDButton(Member* currentMember) {
	Withdrawal withdrawal;
	string ID = withdrawal.withdrawalMem(currentMember);

	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "1.2. È¸¿øÅ»Åð" << endl;
		writeFile << "> " + ID << endl;
		writeFile.close();
	}
}
