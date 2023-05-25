#include "SearchRecruitUI.h"

void SearchRecruitUI::clickSearchRecruit(string inputCompanyName) {
	SearchRecruit searchRecruit;
	vector<tuple<string, int, string, int, string>> recruitDetail;
	recruitDetail = searchRecruit.callRecruitInfo(inputCompanyName);
	
	string line;
	string companyName, businessNum, task, number, deadline;
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "4.1. 채용 정보 검색" << endl;
		for (int i = 0; i < recruitDetail.size(); i++) {
			companyName = get<0>(recruitDetail[i]) + " "; // 회사이름
			businessNum = to_string(get<1>(recruitDetail[i])) + " "; // 사업자번호
			task = get<2>(recruitDetail[i]) + " "; // 업무
			number = to_string(get<3>(recruitDetail[i])) + " "; // 인원수
			deadline = get<4>(recruitDetail[i]); // 마감일
			line = "> " + companyName + businessNum + task + number + deadline;

			writeFile << line << endl; // txt 파일에 작성
		}
		writeFile.close();
	}
}
