#include <iostream>
#include <string>
using namespace std;

class Recruit
{
private:
    string companyName;
    string task;
    int number;
    string deadline;

public:
    string getCompanyName();
    string getTask();
    int getNumber();
    string getDeadline();
    // 디테일 튜플로 반환하는 함수
};