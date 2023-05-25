#include "Member.h"

vector<Member*> Member::memList; // static 변수는 클래스 외부에서 선언 및 초기화 해야 함

string Member::getID() {
	return this->ID;
}

string Member::getPW() {
	return this->PW;
}

int Member::getIsCompanyMember() {
	return this->isCompanyMember;
}

void Member::addNewRecruit(string, int, string) {
	return;
}

vector<Recruit> Member::listRecruit() {
	vector<Recruit> nullRecruitVector;
	return nullRecruitVector;
}

string Member::getCompanyName(){
	return "";
}
