#include "SearchRecruit.h"

vector<tuple<string, int, string, int ,string>> SearchRecruit::callRecruitInfo(string searchCompanyName) {
	CompanyMember companyMember("ȸ��ȸ��", 3456); // �����ʿ�
	// memlist���� for�� ���鼭 companyName�� ��ġ�ϴ� ��ü�� ���� ã�Ƽ� listRecruit���� �ް�
	// ���� ����Ʈ���� getRecruitDetails���� ���λ��� �޾ƿͰ�����
	// UI�� ������ �ɵ�??
	int size = Member::memList.size();
	int isCompanyMember = 0;
	vector<Recruit> recruitInstance;
	vector<tuple<string, int, string, int, string>> recruitDetail;

	cout << "memlist size = " << size << endl;
	string companyName;
	for (int i = 0; i < size; i++) {
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