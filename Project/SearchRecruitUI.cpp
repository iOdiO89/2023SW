#include "SearchRecruitUI.h"

void SearchRecruitUI::clickSearchRecruit(string inputCompanyName) {
	SearchRecruit searchRecruit;
	vector<tuple<string, int, string, int, string>> recruitDetail;
	recruitDetail = searchRecruit.callRecruitInfo(inputCompanyName);
	
	string line;
	string companyName, businessNum, task, number, deadline;
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "4.1. ä�� ���� �˻�" << endl;
		for (int i = 0; i < recruitDetail.size(); i++) {
			companyName = get<0>(recruitDetail[i]) + " "; // ȸ���̸�
			businessNum = to_string(get<1>(recruitDetail[i])) + " "; // ����ڹ�ȣ
			task = get<2>(recruitDetail[i]) + " "; // ����
			number = to_string(get<3>(recruitDetail[i])) + " "; // �ο���
			deadline = get<4>(recruitDetail[i]); // ������
			line = "> " + companyName + businessNum + task + number + deadline;

			writeFile << line << endl; // txt ���Ͽ� �ۼ�
		}
		writeFile.close();
	}
}
