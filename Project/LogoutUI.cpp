#include "LogoutUI.h"
#include <iostream>

using namespace std;

void LogoutUI::clickLogoutButton(Member* currentMember) {
	Logout logout;
	string ID = logout.logoutMem(currentMember);


	// output.txt에 출력
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "2.2. 로그아웃" << endl;
		writeFile << "> " + ID << endl;
		writeFile.close();
	}
}
