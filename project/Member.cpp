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

Member::~Member() // ȸ��Ż�� �� ���� ����
{
	// �Ҹ���
}

vector<string> checkMem() // �α��� ��, ID�� PW�� �´��� Ȯ��
{
	// ������ �´��� Ȯ�� ����
}