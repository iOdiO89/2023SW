#pragma once
#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>

#include "Member.h"

class Stats
{
public:
	vector<tuple<string, string>> showStats(Member*);
};