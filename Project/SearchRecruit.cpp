#include "SearchRecruit.h"

vector<tuple<string, int, string, int ,string>> SearchRecruit::callRecruitInfo(string companyName) {
	CompanyMember companyMember("ȸ��ȸ��", 3456); // �����ʿ�
	vector<Recruit> recruitInstance = companyMember.listRecruit();

	vector<tuple<string, int, string, int, string>> recruitDetail;
	for (int i = 0; i < recruitDetail.size(); i++) {
		// ���ǹ� �ʿ� - Ư�� ȸ���� ä�������鸸 �ɷ��� �� �ְ�
		recruitDetail.push_back(recruitInstance[i].getRecruitDetails());
	}

	return recruitDetail;
}