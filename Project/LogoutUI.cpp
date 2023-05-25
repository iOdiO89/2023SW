#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::clickLogoutButton(Member* currentMember) {
	Logout logout;
	string ID = logout.logoutMem(currentMember);

	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "2.2. ·Î±×¾Æ¿ô" << endl;
		writeFile << "> " + ID << endl;
		writeFile.close();
	}
}
