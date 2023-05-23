#pragma once
#include <iostream>
#include <string.h>
#include "Application.h"
#include "ApplicationStats.h"


class ApplicationStatsUI
{
private:
	ApplicationStats* pApplicationStats;
public:
	void CheckApplicationStats();
};