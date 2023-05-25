#include "Member.h"

Member::Member(vector<string>& inputID, vector<string>& inputPW)
{
	ID = inputID;
	PW = inputPW;
}

vector<string> Member::getID()
{
	return ID;
}

vector<string> Member::getPW()
{
	return PW;
}

Member::~Member() // 회원탈퇴 시 정보 제거
{
	// 소멸자
}

vector<string> checkMem() // 로그인 시, ID와 PW가 맞는지 확인
{
	// 정보가 맞는지 확인 구현
}