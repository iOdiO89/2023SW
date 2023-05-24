#pragma once
#include <iostream>
#include <tuple>
#include <fstream>
#include <string>

using namespace std;

class Recruit {
private:
	string companyName; // 회사이름
	int businessNum; // 사업자번호
	string task; // 업무
	int number; // 인원수
	string deadline; // 마감일

public:
	Recruit(string companyName, int businessNum, string task, int number, string deadline);
	tuple<string, int, string, int, string> getRecruitDetails();
};