#include "GeneralMember.h"

GeneralMember::GeneralMember(vector<string>& inputname, vector<string>& inputsecurityNum) // ȸ������ �� ���� ���� ����
{
	name = inputname;
	securityNum = inputsecurityNum;
}

vector<string> GeneralMember::getname()
{
	return name;
}

vector<string> GeneralMember::getsecurityNum()
{
	return securityNum;
}