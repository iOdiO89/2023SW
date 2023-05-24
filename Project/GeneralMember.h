#pragma once
#include <iostream>
#include <string.h>

#include "ApplicationCollection.h"

class GeneralMember
{
private:
	string name;
	string securityNum;
	ApplicationCollection ownAC;
public:
	ApplicationCollection GetAC();
};