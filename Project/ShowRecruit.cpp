#include "ShowRecruit.h"


vector<tuple<string, int, string>> ShowRecruit::showListOfRecruit(CompanyMember companyMember) {
	vector<Recruit> recruitArray = companyMember.listRecruit();

	vector<tuple<string, int, string>> recruitDetail;
	string companyName, task, deadline;
	int businessNum, number;

	for (int i = 0; i < recruitArray.size(); i++) {
		tie(companyName, businessNum, task, number, deadline) = recruitArray[i].getRecruitDetails();

		// 조건문 필요 - 해당회사회원의 채용정보만 걸러낼 수 있게
		recruitDetail.push_back(make_tuple(task, number, deadline)); 
	}

	return recruitDetail;
}