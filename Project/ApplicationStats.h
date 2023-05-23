#pragma once
#include <iostream>
#include <string.h>
#include "GeneralMember.h"
#include "Recruit.h"



class ApplicationStats
{
private:
	GeneralMember* pGeneralMember;
	Recruit* pRecruit;
public:
	void ShowApplicationStats();
};