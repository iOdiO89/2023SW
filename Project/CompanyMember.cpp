#include "CompanyMember.h"


CompanyMember::CompanyMember(string inputCompanyName, int inputBusinessNum) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	//벡터는 size = 0 인 벡터 자동생성
}

// 삭제예정
CompanyMember::CompanyMember(string inputCompanyName, int inputBusinessNum, vector<Recruit> inputRecruitArray) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	recruitArray = inputRecruitArray;
}

string CompanyMember::getCompanyName() {
	return companyName;
}

int CompanyMember::getBusinessNum() {
	return businessNum;
}

void CompanyMember::addNewRecruit(string task, int number, string deadline) {
	string companyName = getCompanyName();
	int businessNum = getBusinessNum();
	Recruit newRecruit = Recruit(companyName, businessNum, task, number, deadline);
	recruitArray.push_back(newRecruit);
}

vector<Recruit> CompanyMember::listRecruit() {
	return recruitArray;
}