#pragma once
#include <iostream>
#include <vector>

#include "Member.h"
#include "Recruit.h"

using namespace std;

class CompanyMember : public Member {
private:
	string companyName;
	string businessNum; 
	vector<Recruit> recruitArray;

public:
	CompanyMember(string, string, string, string);
	~CompanyMember();

	CompanyMember(string, int);
	CompanyMember(string, int, vector<Recruit>); // �����ʿ�
	virtual string getCompanyName();
	virtual string getBusinessNum();
	virtual void addNewRecruit(string, int, string);
	virtual vector<Recruit> listRecruit();
};