#include "GeneralMember.h"

using namespace std;

GeneralMember::GeneralMember(string name, int securityNum, string ID, string PW) {
	this->isCompanyMember = 2;
	this->ID = ID;
	this->PW = PW;
	this->name = name;
	this->securityNum = securityNum;
}