#include "Recruit.h"

string Recruit::getCompanyName()
{
    return companyName;
}

string Recruit::getTask()
{
    return task;
}

int Recruit::getNumber()
{
    return number;
}

string Recruit::getDeadline()
{
    return deadline;
}

Recruit::Recruit(string inputCompanyName, string inputBusinessNum, string inputTask, int inputNumber, string inputDeadline) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	task = inputTask;
	number = inputNumber;
	deadline = inputDeadline;
}

tuple<string, string, string, int, string> Recruit::getRecruitDetails() {
	return make_tuple(companyName, businessNum, task, number, deadline);
}