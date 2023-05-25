#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <tuple>

#include "Member.h"
#include "Login.h"

using namespace std;

class LoginUI {
public:
	Member* inputID(string);
};
