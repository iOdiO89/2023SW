#pragma once
#include <iostream>
#include <vector>

#include "Member.h"


class GeneralMember
{
private:
	vector<string> name; // �̸�
	vector<string> securityNum; // �ֹι�ȣ
public:
	GeneralMember(vector<string>& na, vector<string>& secNum);
	vector<string> getname();
	vector<string> getsecurityNum();
};