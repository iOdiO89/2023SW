#pragma once
#include <iostream>
#include <vector>

#include "Member.h"


class CompanyMember
{
private:
	vector<string> companyName; // ȸ���̸�
	vector<string> businessNum; // ����ڹ�ȣ
public:
	CompanyMember(vector<string>& comNa, vector<string>& busNum);
	vector<string> getcompanyName();
	vector<string> getbusinessNum();
};