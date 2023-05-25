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
		writeFile << "3.1. ä�� ���� �˻�" << endl;

		task = task + " "; // ����
		strNumber = to_string(number) + " "; // �ο���
		deadline = deadline; // ������
		line = "> " + task + strNumber + deadline;

		writeFile << line << endl; // txt ���Ͽ� �ۼ�
		writeFile.close();
	}
	return;
}
