// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "Join.h"
#include "JoinUI.h"
#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "GeneralUser.h"
#include "CompanyUser.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

using namespace std;

int main() {
    // 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask() {
    Join jo;
    JoinUI joui;
    Withdrawal wd;
    WithdrawalUI wdui;
    Login log;
    LoginUI logui;
    Logout lout;
    LogoutUI loutui;
    GeneralUser gu("", "", "", "");
    CompanyUser cu("", "", "", "");

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);
        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: {
                joui.start(jo, in_fp, out_fp);
                break;
            }
            case 2: {
                wdui.start(gu, wd, out_fp);
                break;
            }
            }
        case 2: {
            switch (menu_level_2) {
            case 1: {
                string id, password;
                fscanf(in_fp, "%s %s", &id[0], &password[0]);
                logui.start(gu, log, id, password, out_fp);
                break;
            }
            case 2: {
                loutui.start(gu, lout, out_fp);
                break;
            }
            }
        }
        default: {
            cout << "잘못된 선택입니다." << endl;
            break;
        }
        }
        }
    }
}

    void program_exit() {
        cout << "프로그램을 종료합니다." << endl;
        exit(0);
    }
