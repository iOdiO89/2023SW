#include <stdio.h>
#include <string.h>
#include "ApplyRecruitUI.h"
#include "CancelApplyUI.h"
#include "SearchApplyUI.h"
#include "CompanyMemmberCollection.h"
#include "GeneralMemberCollection.h"
// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt“
#define OUTPUT_FILE_NAME "output.txt"
// 함수 선언
void doTask();
void join();
void apply(); // 4.2
void program_exit();
// 변수 선언
FILE *in_fp, *out_fp;

CompanyMemberCollection *ownedCM;
GeneralMemberCollection *ownedGM;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE *in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    ownedCM = new CompanyMemberCollection();
    ownedGM = new GeneralMemberCollection();

    doTask();

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                // join() 함수에서 해당 기능 수행

                break;
            }
            case 2:
            {
                break;
            }
            }
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
                /* code */
                break;

            case 2:
                apply(ID);
                break;

            case 3:
                applyInfo(ID);

            case 4:
                applycancel(ID);

            default:
                break;
            }
        }
        // case 2~5 추가해야함!!!!!!
        case 6:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. 종료“ 메뉴 부분
            {
                program_exit();
                is_program_exit = 1;
                break;
            }
            }
        }
        }
    }
    return;
}

void apply(string ID)
{
    ApplyRecruitUI *ARUI = new ApplyRecruitUI();
    ARUI->applyNewRecruit(ID);
}

void applyInfo(string ID)
{
    SearchApplyUI *SAUI = new SearchApplyUI();
    SAUI->searchApplication(ID);
}

void applycancel(string ID)
{
    CancelApplyUI *CAUI = new CancelApplyUI();
    CAUI->selectApplication(ID);
}

void program_exit()
{
}