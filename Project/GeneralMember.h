#pragma once

#include <iostream>

#include "Member.h"
#include "Application.h"

using namespace std;

class GeneralMember: public Member{
private:
	string name;
	string securityNum;
	vector<Application> applicationArray;
public:
	GeneralMember(string, string, string, string);
	vector<Application> getApplicationArray();
	void setApplicationArray(vector<Application>);

};

