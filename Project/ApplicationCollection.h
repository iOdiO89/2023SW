#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include "Application.h"

using namespace std;

class ApplicationCollection
{
private:
	vector<Application> arrAC;
public:
	Application GetApplicationRef(int);
};