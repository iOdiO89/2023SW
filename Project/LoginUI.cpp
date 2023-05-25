#include "LoginUI.h"

Member* LoginUI::inputID(string rest) {
	string ID, PW;
	stringstream ss(rest);
	ss >> ID >> PW; // input.txt 파일에 있던 나머지 매개변수들을 받아와서 공백분리

	Login login;
	tuple<string, string, Member*> loginInfo;
	loginInfo = login.loginMem(ID, PW);
	ID = get<0>(loginInfo);
	PW = get<1>(loginInfo);
	Member* member = get<2>(loginInfo);

	// output.txt 에 출력
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "2.1. 로그인" << endl;
		writeFile << "> " + ID + " " + PW << endl;
		writeFile.close();
	}

	return member; // 로그인할 회원 객체 반환
}