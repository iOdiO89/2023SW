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
		writeFile << "3.2. ��ϵ� ä�� ���� ��ȸ" << endl;
		for (int i = 0; i < recruitDetail.size(); i++) {
			task = get<0>(recruitDetail[i]) + " "; // ����
			number = to_string(get<1>(recruitDetail[i])) + " "; // �ο���
			deadline = get<2>(recruitDetail[i]); // ������
			line = "> " + task + number + deadline;

			writeFile << line << endl; // txt ���Ͽ� �ۼ�
		}
		writeFile.close();
	}
}