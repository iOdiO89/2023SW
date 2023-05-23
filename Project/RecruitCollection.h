#pragma once
#include <iostream>
#include <string.h>
#include "Recruit.h"

class RecruitCollection
{
private:
	Recruit* applicedRecruit[];
public:
	void FindFirst();
	void GetNext();
	void AddRecruit();
	void RemoveRecruit();
};