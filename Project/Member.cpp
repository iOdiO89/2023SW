#include "Member.h"

vector<Member*> Member::memList; // static ������ Ŭ���� �ܺο��� ���� �� �ʱ�ȭ �ؾ� ��

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

string Member::getBusinessNum() {
	return "";
}

string Member::getTask() {
	return "";
}

//�Ϲ�ȸ����
vector<Application> Member::getApplicationArray() {
	vector<Application> nullApplicationVector;
	return nullApplicationVector;
}

void Member::setApplicationArray(vector<Application>) {
	return;
}
