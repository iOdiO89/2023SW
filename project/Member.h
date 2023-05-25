#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Member
{
private:
	vector<string> ID; // 아이디
	vector<string> PW; // 비밀번호
public:
	Member(vector<string>& id, vector<string>& pw);
	vector<string> getID();
	vector<string> getPW();
	~Member();
};