#pragma once
#include <iostream>
#include <tuple>
#include <fstream>
#include <string>

using namespace std;

class Recruit {
private:
	string companyName; // ȸ���̸�
	int businessNum; // ����ڹ�ȣ
	string task; // ����
	int number; // �ο���
	string deadline; // ������

public:
	Recruit(string companyName, int businessNum, string task, int number, string deadline);
	tuple<string, int, string, int, string> getRecruitDetails();
};