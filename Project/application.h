#pragma once
#include <iostream>
#include <string.h>
#include <tuple>

using namespace std;

class Application
{
private:
	string companyName;
	string task;
	string number;
	string deadline;
public:
	Application(string inputCompanyName, string inputTask, string inputNumber, string inputDeadline);
	tuple<string, string, string, string> GetApplicationDetails();
};