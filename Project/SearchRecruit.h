#pragma once
#include <iostream>
#include <tuple>
#include <vector>
#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class SearchRecruit
{
public:
	vector<tuple<string, int, string, int, string>> callRecruitInfo(string);
};
