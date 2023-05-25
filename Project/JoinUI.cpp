#include "JoinUI.h"

void JoinUI::clickJoinButton(string rest) {
	stringstream ss(rest);
	int isCompanyMember;
	string temp1; // 이름 또는 회사이름
	string temp2; // 주민번호 또는 사업자번호
	string ID, PW; // 회사회원, 일반회원 모두 사용하는 변수
 
	ss >> isCompanyMember >> temp1 >> temp2 >> ID >> PW;

	Join join;
	string sTemp2, sTemp3;
	tuple<int, string, string, string, string> memberInfo;
	memberInfo = join.joinMem(isCompanyMember, temp1, temp2, ID, PW);

	// 받아온 정보 임시변수에 저장
	sTemp3 = to_string(get<0>(memberInfo)) + " "; // 1(회사회원) 또는 2(일반회원)
	temp1 = get<1>(memberInfo) + " "; // 회사이름 또는 이름
	sTemp2 = get<2>(memberInfo) + " "; // 사업자번호 또는 주민번호
	ID = get<3>(memberInfo) + " "; // 업무
	PW = get<4>(memberInfo); // 인원수

	string line = "";
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		line = "> " + sTemp3 + temp1 + sTemp2 + ID + PW;

		writeFile << "1.1. 회원가입" << endl;
		writeFile << line << endl;

		writeFile.close();
	}
}
