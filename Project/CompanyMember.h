#pragma once
#include <iostream>
#include <vector>

#include "Recruit.h"

using namespace std;

class CompanyMember {
private:
	string companyName;
	int businessNum; 
	vector<Recruit> recruitArray;

public:
	CompanyMember(string, int);
	CompanyMember(string, int, vector<Recruit>); // �����ʿ�
	string getCompanyName();
	int getBusinessNum();
	void addNewRecruit(string, int, string);
	vector<Recruit> listRecruit();
};