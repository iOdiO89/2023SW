#pragma once
#include <iostream>
#include <vector>

#include "Member.h"


class GeneralMember
{
private:
	vector<string> name; // 이름
	vector<string> securityNum; // 주민번호
public:
	GeneralMember(vector<string>& na, vector<string>& secNum);
	vector<string> getname();
	vector<string> getsecurityNum();
};