#include "Recruit.h"

string Recruit::getCompanyName() // 객체의 회사이름 반환
{
    return companyName;
}

string Recruit::getTask() // 객체의 업무 이름 반환
{
    return task;
}

int Recruit::getNumber() // 객체의 인원수 반환 
{
    return number;
}

string Recruit::getDeadline() // 객체의 마감일 반환
{
    return deadline;
}

// 생성자
Recruit::Recruit(string inputCompanyName, string inputBusinessNum, string inputTask, int inputNumber, string inputDeadline) {
	companyName = inputCompanyName;
	businessNum = inputBusinessNum;
	task = inputTask;
	number = inputNumber;
	deadline = inputDeadline;
}

// 회사이름, 사업자정보, 업무, 인원수, 마감일 정보 반환
tuple<string, string, string, int, string> Recruit::getRecruitDetails() {
	return make_tuple(companyName, businessNum, task, number, deadline);
}