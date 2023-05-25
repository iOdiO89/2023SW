#include "SearchRecruit.h"

vector<tuple<string, int, string, int ,string>> SearchRecruit::callRecruitInfo(string companyName) {
	CompanyMember companyMember("회사회원", 3456); // 수정필요
	vector<Recruit> recruitInstance = companyMember.listRecruit();

	vector<tuple<string, int, string, int, string>> recruitDetail;
	for (int i = 0; i < recruitDetail.size(); i++) {
		// 조건문 필요 - 특정 회사의 채용정보들만 걸러낼 수 있게
		recruitDetail.push_back(recruitInstance[i].getRecruitDetails());
	}

	return recruitDetail;
}