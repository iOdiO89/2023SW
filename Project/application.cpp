#include "application.h"

Application::Application(string inputCompanyName, string inputTask, string inputNumber, string inputDeadline)
{
	companyName = inputCompanyName;
	task = inputTask;
	number = inputNumber;
	deadline = inputDeadline;
}

tuple<string, string, string, string> Application::GetApplicationDetails()
{
	return make_tuple(companyName, task, number, deadline);
}