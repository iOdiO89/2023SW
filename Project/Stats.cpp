#include "Stats.h"

vector<tuple<string, string>> Stats::showStats(Member* currentMember)
{
    vector<string> taskVector;
    vector<Member*> listOfMember;
    int typeOfMember;   //멤버 타입 구별하기 위한 변수
    typeOfMember = currentMember->getIsCompanyMember();

    if (typeOfMember == 1) {   //회사회원인 경우
        // 현재 로그인한 회사회원이 등록한 모든 채용정보 가지고 오기
        vector<Recruit> recruitList = currentMember->listRecruit();
        string companyName = currentMember->getCompanyName(); // 현재 로그인되어 있는 회사이름 가져오기

        // 가지고 있는 모든 채용정보에 대해 업무 이름만 가져오기
        for (int i = 0; i < recruitList.size(); i++) {
            taskVector.push_back(recruitList[i].getTask());
        }

        vector<int> count(taskVector.size(), 0);
        listOfMember = Member::memList;

        // for문을 돌면서 모든 일반회원들이 가지고 있는 지원정보를 확인하여
        // 지원정보에 저장되어 있는 회사 이름과 현재 로그인되어있는 회사 이름이 일치하는 경우
        // 업무별 지원자 수를 count 함
        for (int j = 0; j < listOfMember.size(); j++) {
            if (listOfMember[j]->getIsCompanyMember() == 2) { //일반회원인지 확인
                vector<Application> arrApplication = listOfMember[j]->getApplicationArray(); 
                for (int k = 0; k < arrApplication.size(); k++) {
                    if (companyName == arrApplication[j].getCompanyName()) {
                        for (int l = 0; l < taskVector.size(); l++) {
                            if (taskVector[l] == arrApplication[k].getTask()) {
                                count[l]++;
                            }
                        }
                    }

                }
            }
        }
        vector<tuple<string, string>> statsRes(taskVector.size());
        for (int m=0; m < taskVector.size(); m++) {
            statsRes[m] = make_tuple(taskVector[m], to_string(count[m]));
        }
        return statsRes;
    }

    else // 일반회원인 경우
    {
        vector<Application> applicationInfo = currentMember->getApplicationArray(); // 자신이 지원한 지원정보 전부 가져오기
        vector<string> taskVector, taskVectorUnique;
        // 가지고 있는 모든 지원정보에 대해 업무 이름을 받아오기
        for (int i = 0; i < applicationInfo.size(); i++) {
            taskVector.push_back(applicationInfo[i].getTask());
        }

        //taskVectorUnique 중복성 제거
        taskVectorUnique = taskVector;
        sort(taskVectorUnique.begin(), taskVectorUnique.end());
        taskVectorUnique.erase(unique(taskVectorUnique.begin(), taskVectorUnique.end()), taskVectorUnique.end());

        vector<tuple<string, string>> statsRes(taskVectorUnique.size());
        int countStats = 0;
        string sCountStats;
        // 가지고 있는 모든 지원정보를 확인하면서 업무별로 지원횟수 통계 내기
        for (int i = 0; i < taskVector.size(); i++) {
            countStats = count(taskVector.begin(), taskVector.end(), taskVectorUnique[i]);
            sCountStats = to_string(countStats);
            statsRes.push_back(make_tuple(taskVectorUnique[i], sCountStats));
            countStats = 0;
        }
        return statsRes; // 업무이름, 업무 이름별 지원횟수를 반환
    }

}
