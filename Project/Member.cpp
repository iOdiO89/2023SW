#include "Member.h"

vector<Member*> Member::memList; // static ������ Ŭ���� �ܺο��� ���� �� �ʱ�ȭ �ؾ� ��

string Member::getID() {
	return this->ID;
}

string Member::getPW() {
	return this->PW;
}

void Member::addNewRecruit(string, int, string) {
	return;
}

vector<Recruit> Member::listRecruit() {
	vector<Recruit> nullRecruitVector;
	return nullRecruitVector;
}

Member::~Member() {
}
