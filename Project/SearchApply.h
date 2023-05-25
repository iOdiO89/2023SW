#pragma once

#include <vector>
#include <iostream>
#include <tuple>

#include "Application.h"
#include "GeneralMember.h"

using namespace std;

class SearchApply
{
public:
    vector<tuple<string, string, string, int, string>> showMemberApplication(Member*);
};