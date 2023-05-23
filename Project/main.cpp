// 헤더 선언
#include <iostream>
#include <fstream>
#include <string>

#include "CompanyMember.h" // 삭제필요
#include "Recruit.h" // 삭제필요
#include <vector> // 삭제필요

#include "AddRecruitUI.h"
#include "ShowRecruitUI.h"
#include "ShowRecruitInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
ifstream readFile(INPUT_FILE_NAME);

// 함수 선언
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
    Recruit newRecruit("회사이름", 3456, "accounting", 2, "2023/05/22");
    vector<Recruit> recruit;
    recruit.push_back(newRecruit);
    CompanyMember companyMember("회사회원", 3456, recruit); // 임시 생성

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menuLevel1=0, menuLevel2=2;
    int is_program_exit = 0;

    string line, rest;
    while (!is_program_exit && !readFile.eof())
    {
        getline(readFile, line);
        menuLevel1 = line[0] - '0'; // int 변환
        menuLevel2 = line[2] - '0';
        if (line.length() > 4) rest = line.substr(4, line.length()); // rest = 나머지 매개변수들
        // 메뉴 구분 및 해당 연산 수행
        switch (menuLevel1)
        {
            case 3:
                switch (menuLevel2) {
                case 1:
                    AddRecruitUI addRecruitUI;
                    addRecruitUI.createRecruit(rest, companyMember);
                    break;
                case 2:
                    ShowRecruitUI showRecruitUI;
                    showRecruitUI.clickShowRecruit(companyMember);
                    break;
                }
                break;
            case 4:
                switch (menuLevel2) {
                case 1:
                    ShowRecruitInfoUI showRecruitInfoUI;
                    showRecruitInfoUI.clickShowRecruitInfo(rest);
                    break;
                }
                break;
            case 6:
                switch (menuLevel2)
                {
                case 1:   // "6.1. 종료“ 메뉴 부분
                    program_exit();
                    is_program_exit = 1;
                    break;;
                }
        }
    }

    return;
}

void program_exit() {
    cout << "프로그램 종료" << endl;
    exit(0);
}