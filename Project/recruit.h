#pragma once
#include <iostream>
#include <string.h>
#include <tuple>

using namespace std;

class Recruit
{
private:
	string companyName;
	string task;
	string number; 
	string deadline;
	
public:
	Recruit(string companyName, string task, string number, string deadline);
	tuple<string, string, string, string> GetRecruitDetails();
};