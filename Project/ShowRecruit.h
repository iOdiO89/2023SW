#pragma
#include <iostream>
#include <vector>
#include <tuple>
#include <string>

#include "CompanyMember.h"
#include "Recruit.h"

using namespace std;

class ShowRecruit
{
public:
	vector<tuple<string, int, string>> showListOfRecruit(Member*);
};

