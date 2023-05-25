#include "ShowRecruit.h"


vector<tuple<string, int, string>> ShowRecruit::showListOfRecruit(Member* currentMember) {
	vector<Recruit> recruitArray = currentMember->listRecruit(); // 회사회원이 가진 채용정보

	vector<tuple<string, int, string>> recruitDetail;
	string companyName, task, deadline;
	int businessNum, number;

	for (int i = 0; i < recruitArray.size(); i++) {
		tie(companyName, businessNum, task, number, deadline) = recruitArray[i].getRecruitDetails();
		recruitDetail.push_back(make_tuple(task, number, deadline)); 
	}

	return recruitDetail;
}