#pragma once
#include <iostream>
#include <vector>

#include "Member.h"


class CompanyMember
{
private:
	vector<string> companyName; // 회사이름
	vector<string> businessNum; // 사업자번호
public:
	CompanyMember(vector<string>& comNa, vector<string>& busNum);
	vector<string> getcompanyName();
	vector<string> getbusinessNum();
};