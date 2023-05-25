#pragma once

#include <iostream>
#include <tuple>

using namespace std;

class Recruit
{
private:
    string companyName; // 회사이름
    string businessNum; // 사업자번호
    string task; // 업무
    int number; // 인원수
    string deadline; // 마감일

public:
    string getCompanyName();
    string getTask();
    int getNumber();
    string getDeadline();

    Recruit(string companyName, string businessNum, string task, int number, string deadline);
    tuple<string, string, string, int, string> getRecruitDetails();
    // 디테일 튜플로 반환하는 함수
};