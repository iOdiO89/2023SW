#include "ShowRecruit.h"


vector<tuple<string, int, string>> ShowRecruit::showListOfRecruit(CompanyMember companyMember) {
	vector<Recruit> recruitArray = companyMember.listRecruit();

	vector<tuple<string, int, string>> recruitDetail;
	string companyName, task, deadline;
	int businessNum, number;

	for (int i = 0; i < recruitArray.size(); i++) {
		tie(companyName, businessNum, task, number, deadline) = recruitArray[i].getRecruitDetails();

		// ���ǹ� �ʿ� - �ش�ȸ��ȸ���� ä�������� �ɷ��� �� �ְ�
		recruitDetail.push_back(make_tuple(task, number, deadline)); 
	}

	return recruitDetail;
}