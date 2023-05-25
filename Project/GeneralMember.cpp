#include "GeneralMember.h"

using namespace std;

GeneralMember::GeneralMember(string name, string securityNum, string ID, string PW) {
	this->isCompanyMember = 2;
	this->ID = ID;
	this->PW = PW;
	this->name = name;
	this->securityNum = securityNum;
}

vector<Application> GeneralMember::getApplicationArray() {
	return this->applicationArray;
}

void GeneralMember::setApplicationArray(vector<Application> applicationArray) {
	this->applicationArray = applicationArray;
}	