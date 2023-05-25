#include "GeneralMember.h"

GeneralMember::GeneralMember(vector<string>& inputname, vector<string>& inputsecurityNum) // 회원가입 때 들어온 정보 저장
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