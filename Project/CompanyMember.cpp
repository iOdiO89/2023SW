#include "CompanyMember.h"

// 생성자
CompanyMember::CompanyMember(string companyName, string businessNum, string ID, string PW) {
	this->isCompanyMember = 1;
	this->ID = ID;
	this->PW = PW;
	this->companyName = companyName;
	this->businessNum = businessNum;
}

// 소멸자
CompanyMember::~CompanyMember() {
}

CompanyMember::CompanyMember(string inputCompanyName, int inputBusinessNum) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	//벡터는 size = 0 인 벡터 자동생성
}

string CompanyMember::getCompanyName() { // 객체의 회사이름 반환
	return companyName;
}

string CompanyMember::getBusinessNum() { // 객체의 사업자번호 반환
	return businessNum;
}

// 객체에 새로운 채용정보 등록
void CompanyMember::addNewRecruit(string task, int number, string deadline) {
	string companyName = getCompanyName();
	string businessNum = getBusinessNum();
	Recruit newRecruit = Recruit(companyName, businessNum, task, number, deadline);
	recruitArray.push_back(newRecruit);
}

// 객체가 가진 채용정보들 반환
vector<Recruit> CompanyMember::listRecruit() {
	return recruitArray;
}