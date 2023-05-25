#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Member.h"
#include "CompanyMember.h" 
#include "GeneralMember.h"
#include "Recruit.h" 
#include "Application.h"

#include "JoinUI.h" // 1.1. 회원가입
#include "WithdrawalUI.h" // 1.2. 회원탈퇴
#include "LoginUI.h" // 2.1. 로그인
#include "LogoutUI.h" // 2.2. 로그아웃
#include "AddRecruitUI.h" // 3.1. 채용 정보 등록
#include "ShowRecruitUI.h" // 3.2. 등록된 채용 정보 조회
#include "SearchRecruitUI.h" // 4.1. 채용 정보 검색
#include "ApplyRecruitUI.h" // 4.2. 채용 지원
#include "SearchApplyUI.h" // 4.3. 지원 정보 조회
#include "CancelApplyUI.h" // 4.4. 지원 취소
#include "StatsUI.h" // 5.1. 지원정보 통계


#define INPUT_FILE_NAME "input.txt"
ifstream readFile(INPUT_FILE_NAME);
static Member* currentMember; // 현재 로그인 중인 회원 정보

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
    while (!is_program_exit)
    {
        getline(readFile, line);
        menuLevel1 = line[0] - '0'; // int 변환
        menuLevel2 = line[2] - '0';
        if (line.length() > 4) rest = line.substr(4, line.length()); // rest = 나머지 매개변수들
        // 메뉴 구분 및 해당 연산 수행
        switch (menuLevel1)
        {
        case 1:
            switch (menuLevel2)
            {
            case 1: // 1.1. 회원가입
                JoinUI joinUI;
                joinUI.clickJoinButton(rest);
                break;
            case 2: // 1.2. 회원탈퇴
                WithdrawalUI withdrawalUI;
                withdrawalUI.clickWDButton(currentMember);
                currentMember = NULL;
                break;
            }
            break;
        case 2:
            switch (menuLevel2)
            {
            case 1: // 2.1. 로그인
                LoginUI loginUI;
                currentMember = loginUI.inputID(rest);
                break;
            case 2: // 2.2. 로그아웃
                LogoutUI logoutUI;
                logoutUI.clickLogoutButton(currentMember);
                currentMember = NULL;
                break;
            }
            break;
        case 3:
            switch (menuLevel2) {
            case 1: // 3.1. 채용 정보 등록
                AddRecruitUI addRecruitUI;
                addRecruitUI.createRecruit(rest, currentMember);
                break;
            case 2: // 3.2. 등록된 채용 정보 조회
                ShowRecruitUI showRecruitUI;
                showRecruitUI.clickShowRecruit(currentMember);
                break;
            }
            break;
        case 4:
            switch (menuLevel2) {
            case 1: // 4.1. 채용 정보 검색
            {
                SearchRecruitUI searchRecruitUI;
                searchRecruitUI.clickSearchRecruit(rest);
                break;
            }
            case 2: // 4.2. 채용 지원
            {
                ApplyRecruitUI* ARUI = new ApplyRecruitUI();
                ARUI->applyNewRecruit(rest, currentMember);
                break;
            }

            case 3: // 4.3. 지원 정보 조회
            {
                SearchApplyUI* SAUI = new SearchApplyUI();
                SAUI->searchApplication(currentMember);
                break;
            }
            case 4: // 4.4 지원 취소
            {
                CancelApplyUI* CAUI = new CancelApplyUI();
                CAUI->selectApplication(rest, currentMember);
                break;
            }}
            break;
        case 5:
            switch (menuLevel2) {
            case 1: // 5.1. 지원 통계
                StatsUI statsUI;
                statsUI.checkStats(currentMember);
                break;
            }
            break;
        case 6:
            switch (menuLevel2)
            {
            case 1:   // 6.1. 종료
                program_exit();
                is_program_exit = 1;
                break;
            }
        }
    }

    return;
}

void program_exit(){
    fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "6.1. 종료" << endl;
        writeFile.close();
    }
    exit(0);
}