// 헤더 선언
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Join.h"
#include "JoinUI.h"
#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "GeneralMember.h"
#include "CompanyMember.h"


// 상수 선언
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

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menuLevel1 = 0, menuLevel2 = 2;
    int is_program_exit = 0;

    string line, rest;
    while (!is_program_exit && !readFile.eof())
    {
        getline(readFile, line);
        menuLevel1 = line[0] - '0'; // int 변환
        menuLevel2 = line[2] - '0';
        if (line.length() > 4) rest = line.substr(4, line.length());
        // rest = 나머지 매개변수들
        // 메뉴 구분 및 해당 연산 수행
        switch (menuLevel1)
        {
        case 1:
            switch (menuLevel2)
            {
            case 1:
                // 회원가입하기
                break;
            case 2:
                // 회원탈퇴하기
                break;
            }
            break;
        case 2:
            switch (menuLevel2)
            {
            case 1:
                // 로그인하기
                break;
            case 2:
                // 로그아웃하기
                break;
            }
            break;
        }

    }

    return;
}

void program_exit()
{
    cout << "프로그램 종료" << endl;
    exit(0);
}