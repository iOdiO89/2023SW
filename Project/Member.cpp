#include "Member.h"

vector<Member*> Member::memList; // static 변수는 클래스 외부에서 선언 및 초기화 해야 함

string Member::getID() { // 객체의 ID 반환
	return this->ID;
}

string Member::getPW() { // 객체의 PW 반환
	return this->PW;
}

int Member::getIsCompanyMember() { // 객체가 일반회원인지 회사회원인지 여부 반환
	return this->isCompanyMember;
}

void Member::addNewRecruit(string, int, string) {
	return;
}

//회사회원용
vector<Recruit> Member::listRecruit() {
	vector<Recruit> nullRecruitVector;
	return nullRecruitVector;
}

string Member::getCompanyName(){
	return "";
}

string Member::getBusinessNum() {
	return "";
}

string Member::getTask() {
	return "";
}

//일반회원용
vector<Application> Member::getApplicationArray() {
	vector<Application> nullApplicationVector;
	return nullApplicationVector;
}

void Member::setApplicationArray(vector<Application>) {
	return;
}
