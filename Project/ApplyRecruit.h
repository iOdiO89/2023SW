#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "Application.h"

using namespace std;

class ApplyRecruit
{
public:
    vector<string> newRecruit(string, Member*);
};