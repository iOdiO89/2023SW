#pragma once
#include <iostream>
#include <string.h>
#include "RecruitCollection.h"

class GeneralMember
{
private:
	string memberID;
	string memberPW;
	string name;
	int ssn;
	RecruitCollection AppliedRecruitCollection;
public:
	void ListApplication();
};