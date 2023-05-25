#include "SearchRecruit.h"

vector<tuple<string, string, string, int ,string>> SearchRecruit::callRecruitInfo(string searchCompanyName) {
	int isCompanyMember = 0;
	vector<Recruit> recruitInstance;
	vector<tuple<string, string, string, int, string>> recruitDetail;

	string companyName;
	for (int i = 0; i < Member::memList.size(); i++) {
		isCompanyMember = Member::memList[i]->getIsCompanyMember(); // 회사회원인 경우 1 반환
		if (isCompanyMember == 1) { // 회사회원인 경우
			companyName = Member::memList[i]->getCompanyName();

			if (companyName == searchCompanyName) { // 회사회원이면서 검색한 이름과 일치하는 경우
				recruitInstance = Member::memList[i]->listRecruit(); // 해당 회사 회원이 등록한 채용 정보 객체를 담고

				for (int i = 0; i < recruitInstance.size(); i++) {
					recruitDetail.push_back(recruitInstance[i].getRecruitDetails()); // 각 채용정보의 attribute 값들을 받아옴
				}
			}
		}
	}

	return recruitDetail;
}