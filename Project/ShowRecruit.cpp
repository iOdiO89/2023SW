#include "ShowRecruit.h"


vector<tuple<string, int, string>> ShowRecruit::showListOfRecruit(Member* currentMember) {
	vector<Recruit> recruitArray = currentMember->listRecruit(); // ȸ��ȸ���� ���� ä������

	vector<tuple<string, int, string>> recruitDetail;
	string companyName, task, deadline;
	int businessNum, number;

	for (int i = 0; i < recruitArray.size(); i++) {
		tie(companyName, businessNum, task, number, deadline) = recruitArray[i].getRecruitDetails();
		recruitDetail.push_back(make_tuple(task, number, deadline)); 
	}

	return recruitDetail;
}