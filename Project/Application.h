#pragma once

#include <iostream>
#include <string>
using namespace std;

class Application
{
private:
    string companyName;
    string businessNum;
    string task;
    int number;
    string deadline;

public:
    Application(string companyName, string businessNum, string task, int number, string deadline);
    string getCompanyName();
    string getBusinessNum();
    string getTask();
    int getNumber();
    string getDeadline();
};