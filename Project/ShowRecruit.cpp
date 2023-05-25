#include "ShowRecruit.h"


vector<tuple<string, int, string>> ShowRecruit::showListOfRecruit(Member* currentMember) {
	vector<Recruit> recruitArray = currentMember->listRecruit(); // 현재 로그인한 회사회원이 가진 채용정보

	vector<tuple<string, int, string>> recruitDetail;
	string companyName, task, deadline, businessNum;
	int number;

	// 회사회원이 가진 모든 채용정보에 대해 회사이름, 사업자번호, 업무, 인원수, 마감일 정보를 받아옴
	for (int i = 0; i < recruitArray.size(); i++) {
		tie(companyName, businessNum, task, number, deadline) = recruitArray[i].getRecruitDetails();
		recruitDetail.push_back(make_tuple(task, number, deadline)); 
	}

	return recruitDetail; // 회사회원이 가진 모든 채용정보의 변수값들을 반환
}