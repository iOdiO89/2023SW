#include "Recruit.h"

Recruit::Recruit(string inputCompanyName, int inputBusinessNum, string inputTask, int inputNumber, string inputDeadline) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	task = inputTask;
	number = inputNumber;
	deadline = inputDeadline;
}

tuple<string, int, string, int, string> Recruit::getRecruitDetails() {
	return make_tuple(companyName, businessNum, task, number, deadline);
}
