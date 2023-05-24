#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "CompanyMember.h" 
#include "Recruit.h" 
#include "ApplicationStats.h"
#include "ApplicationStatsUI.h"
#include "Application.h"
#include "GeneralMember.h"
#include "RecruitCollection.h"
#include "ApplicationCollection.h"
#include "RecruitStats.h"
#include "RecruitStatsUI.h"

#define INPUT_FILE_NAME "input.txt"
ifstream readFile(INPUT_FILE_NAME);

// �Լ� ����
void doTask();
void program_exit();

using namespace std;

int main()
{
    doTask();

    readFile.close();

    return 0;
}

void doTask()
{   
    Recruit newRecruit("ȸ���̸�", 3456, "accounting", 2, "2023/05/22");
    vector<Recruit> recruit;
    recruit.push_back(newRecruit);
    CompanyMember companyMember("ȸ��ȸ��", 3456, recruit); // �ӽ� ����

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menuLevel1 = 0, menuLevel2 = 2;
    int is_program_exit = 0;

    string line, rest;
    while (!is_program_exit && !readFile.eof())
    {
        getline(readFile, line);
        menuLevel1 = line[0] - '0'; // int ��ȯ
        menuLevel2 = line[2] - '0';
        if (line.length() > 4) rest = line.substr(4, line.length()); // rest = ������ �Ű�������
        // �޴� ���� �� �ش� ���� ����
        switch (menuLevel1)
        {
        case 5:
            switch (menuLevel2) {
            case 1:
                RecruitStatsUI recruitStatsUI;
                recruitStatsUI.CheckRecruitStats();
                break;
            case 2:
                ApplicationStatsUI applicationStatsUI;
                applicationStatsUI.CheckApplicationStats();
                break;
            }
            break;
        case 6:
            switch (menuLevel2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
                program_exit();
                is_program_exit = 1;
                break;;
            }
        }
    }

    return;
}

void program_exit() {
    cout << "���α׷� ����" << endl;
    exit(0);
}