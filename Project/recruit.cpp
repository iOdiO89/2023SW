#include "Recruit.h"

Recruit::Recruit(string inputCompanyName, string inputTask, string inputNumber, string inputDeadline)
{
	companyName = inputCompanyName;
	task = inputTask;
	number = inputNumber;
	deadline = inputDeadline;
}

tuple<string, string, string, string> Recruit::GetRecruitDetails()
{
	return make_tuple(companyName, task, number, deadline);
}