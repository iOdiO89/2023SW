#pragma once
#include <iostream>
#include <tuple>

#include "Member.h"

class Stats
{
public:
	tuple<string,string> showStats(Member*);
};