#include "GeneralMember.h"

using namespace std;

// 생성자
GeneralMember::GeneralMember(string name, string securityNum, string ID, string PW) {
	this->isCompanyMember = 2;
	this->ID = ID;
	this->PW = PW;
	this->name = name;
	this->securityNum = securityNum;
}

// 객체의 지원정보들 반환
vector<Application> GeneralMember::getApplicationArray() {
	return this->applicationArray;
}

// 객체의 지원정보 벡터 덮어씌우기
void GeneralMember::setApplicationArray(vector<Application> applicationArray) {
	this->applicationArray = applicationArray;
}	