#include "CompanyMember.h"

CompanyMember::CompanyMember(vector<string>& inputcompanyName, vector<string>& inputbusinessNum) // ȸ������ �� ���� ���� ����
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