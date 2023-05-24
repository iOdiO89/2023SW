#pragma once
#include <iostream>
#include<string.h>
#include "ApplicationCollection.h"
#include "Recruit.h"

using namespace std;

class CompanyMember
{
private:
	string companyName;
	string businessNum;
	Recruit ownRecruit;
	int numOfApplication;
public:
	Recruit GetRecruit();
};