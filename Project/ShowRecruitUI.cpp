#include "ShowRecruitUI.h"
#include "ShowRecruit.h"

void ShowRecruitUI::clickShowRecruit(CompanyMember companyMember) {
	ShowRecruit showRecruit;
	vector<tuple<string, int, string>> recruitDetail;
	recruitDetail = showRecruit.showListOfRecruit(companyMember);

	string line;
	string task, number, deadline;
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "3.2. 등록된 채용 정보 조회" << endl;
		for (int i = 0; i < recruitDetail.size(); i++) {
			task = get<0>(recruitDetail[i]) + " "; // 업무
			number = to_string(get<1>(recruitDetail[i])) + " "; // 인원수
			deadline = get<2>(recruitDetail[i]); // 마감일
			line = "> " + task + number + deadline;

			writeFile << line << endl; // txt 파일에 작성
		}
		writeFile.close();
	}
}