#pragma once

#include <iostream>

#include "Member.h"

using namespace std;

class GeneralMember: public Member{
private:
	string name;
	int securityNum;
public:
	GeneralMember(string, int, string, string);

};

