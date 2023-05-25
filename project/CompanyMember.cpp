#include "CompanyMember.h"

CompanyMember::CompanyMember(vector<string>& inputcompanyName, vector<string>& inputbusinessNum) // 회원가입 때 들어온 정보 저장
{
	companyName = inputcompanyName;
	businessNum = inputbusinessNum;
}

vector<string> CompanyMember::getcompanyName()
{
	return companyName;
}

vector<string> CompanyMember::getbusinessNum()
{
	return businessNum;
}