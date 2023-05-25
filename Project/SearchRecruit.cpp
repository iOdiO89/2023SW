#include "SearchRecruit.h"

vector<tuple<string, string, string, int ,string>> SearchRecruit::callRecruitInfo(string searchCompanyName) {
	int isCompanyMember = 0;
	vector<Recruit> recruitInstance;
	vector<tuple<string, string, string, int, string>> recruitDetail;

	string companyName;
	for (int i = 0; i < Member::memList.size(); i++) {
		isCompanyMember = Member::memList[i]->getIsCompanyMember(); // ȸ��ȸ���� ��� 1 ��ȯ
		if (isCompanyMember == 1) { // ȸ��ȸ���� ���
			companyName = Member::memList[i]->getCompanyName();

			if (companyName == searchCompanyName) { // ȸ��ȸ���̸鼭 �˻��� �̸��� ��ġ�ϴ� ���
				recruitInstance = Member::memList[i]->listRecruit(); // �ش� ȸ�� ȸ���� ����� ä�� ���� ��ü�� ���

				for (int i = 0; i < recruitInstance.size(); i++) {
					recruitDetail.push_back(recruitInstance[i].getRecruitDetails()); // �� ä�������� attribute ������ �޾ƿ�
				}
			}
		}
	}

	return recruitDetail;
}