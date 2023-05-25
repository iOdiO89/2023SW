#pragma once

#include <iostream>
#include <tuple>
#include "Member.h"

using namespace std;

class Login {
public:
	tuple<string, string, Member*> loginMem(string, string);
};
