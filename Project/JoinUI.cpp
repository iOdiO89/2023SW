#include "JoinUI.h"

void JoinUI::clickJoinButton(string rest) {
	stringstream ss(rest);
	int isCompanyMember;
	string temp1; // �̸� �Ǵ� ȸ���̸�
	string temp2; // �ֹι�ȣ �Ǵ� ����ڹ�ȣ
	string ID, PW; // ȸ��ȸ��, �Ϲ�ȸ�� ��� ����ϴ� ����
 
	ss >> isCompanyMember >> temp1 >> temp2 >> ID >> PW;

	Join join;
	string sTemp2, sTemp3;
	tuple<int, string, string, string, string> memberInfo;
	memberInfo = join.joinMem(isCompanyMember, temp1, temp2, ID, PW);

	// �޾ƿ� ���� �ӽú����� ����
	sTemp3 = to_string(get<0>(memberInfo)) + " "; // 1(ȸ��ȸ��) �Ǵ� 2(�Ϲ�ȸ��)
	temp1 = get<1>(memberInfo) + " "; // ȸ���̸� �Ǵ� �̸�
	sTemp2 = get<2>(memberInfo) + " "; // ����ڹ�ȣ �Ǵ� �ֹι�ȣ
	ID = get<3>(memberInfo) + " "; // ����
	PW = get<4>(memberInfo); // �ο���

	string line = "";
	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		line = "> " + sTemp3 + temp1 + sTemp2 + ID + PW;

		writeFile << "1.1. ȸ������" << endl;
		writeFile << line << endl;

		writeFile.close();
	}
}
