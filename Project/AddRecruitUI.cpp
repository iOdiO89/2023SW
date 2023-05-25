#include "AddRecruitUI.h"

void AddRecruitUI::createRecruit(string rest, Member* currentMember) {
	stringstream ss(rest);
	string task, deadline;
	int number;
	ss >> task >> number >> deadline;

	AddRecruit addRecruit;
	addRecruit.addNewRecruit(task, number, deadline, currentMember);

	string line;
	string strNumber;
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "3.1. 채용 정보 검색" << endl;

		task = task + " "; // 업무
		strNumber = to_string(number) + " "; // 인원수
		deadline = deadline; // 마감일
		line = "> " + task + strNumber + deadline;

		writeFile << line << endl; // txt 파일에 작성
		writeFile.close();
	}
	return;
}
