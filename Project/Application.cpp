#include "Application.h"

Application::Application(string companyName, string businessNum, string task, int number, string deadline)
{
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->task = task;
    this->number = number;
    this->deadline = deadline;
}

string Application::getCompanyName()
{
    return companyName;
}

string Application::getBusinessNum()
{
    return businessNum;
}

string Application::getTask()
{
    return task;
}

int Application::getNumber()
{
    return number;
}

string Application::getDeadline()
{
    return deadline;
}
