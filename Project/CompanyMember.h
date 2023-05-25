#pragma once
#include <iostream>
#include <vector>

#include "Member.h"
#include "Recruit.h"

using namespace std;

class CompanyMember : public Member {
private:
	string companyName;
	int businessNum; 
	vector<Recruit> recruitArray;

public:
	CompanyMember(string, int, string, string);
	~CompanyMember();

	CompanyMember(string, int);
	CompanyMember(string, int, vector<Recruit>); // 삭제필요
	virtual string getCompanyName();
	int getBusinessNum();
	virtual void addNewRecruit(string, int, string);
	virtual vector<Recruit> listRecruit();
};