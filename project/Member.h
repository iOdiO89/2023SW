#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Member
{
private:
	vector<string> ID; // ���̵�
	vector<string> PW; // ��й�ȣ
public:
	Member(vector<string>& id, vector<string>& pw);
	vector<string> getID();
	vector<string> getPW();
	~Member();
};