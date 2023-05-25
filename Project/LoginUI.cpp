#include "LoginUI.h"

Member* LoginUI::inputID(string rest) {
	string ID, PW;
	stringstream ss(rest);
	ss >> ID >> PW;

	Login login;
	tuple<string, string, Member*> loginInfo;
	loginInfo = login.loginMem(ID, PW);
	ID = get<0>(loginInfo);
	PW = get<1>(loginInfo);
	Member* member = get<2>(loginInfo);

	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "2.1. ·Î±×ÀÎ" << endl;
		writeFile << "> " + ID + " " + PW << endl;
		writeFile.close();
	}

	return member;
}