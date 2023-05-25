#include "SearchRecruit.h"

vector<tuple<string, int, string, int ,string>> SearchRecruit::callRecruitInfo(string searchCompanyName) {
	CompanyMember companyMember("회사회원", 3456); // 수정필요
	// memlist에서 for문 돌면서 companyName이 일치하는 객체를 전부 찾아서 listRecruit으로 받고
	// 받은 리스트에서 getRecruitDetails으로 세부사항 받아와가지구
	// UI로 보내면 될듯??
	int size = Member::memList.size();
	int isCompanyMember = 0;
	vector<Recruit> recruitInstance;
	vector<tuple<string, int, string, int, string>> recruitDetail;

	cout << "memlist size = " << size << endl;
	string companyName;
	for (int i = 0; i < size; i++) {
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