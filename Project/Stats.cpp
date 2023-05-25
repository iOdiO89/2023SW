#include "Stats.h"

vector<tuple<string, string>> Stats::showStats(Member* currentMember)
{
    vector<string> taskVector;
    vector<Member*> listOfMember;
    int typeOfMember;   //멤버 타입 구별하기 위한 변수
    typeOfMember = currentMember->getIsCompanyMember();

    if (typeOfMember == 1) {   //회사회원
        vector<Recruit> recruitList = currentMember->listRecruit();
        string companyName = currentMember->getCompanyName();

        for (int i = 0; i < recruitList.size(); i++) {
            taskVector.push_back(recruitList[i].getTask());
        }

        vector<int> count(taskVector.size(), 0);
        listOfMember = Member::memList;

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
        for (int i = 0; i < taskVector.size(); i++) {
            countStats = count(taskVector.begin(), taskVector.end(), taskVectorUnique[i]);
            sCountStats = to_string(countStats);
            statsRes.push_back(make_tuple(taskVectorUnique[i], sCountStats));
            countStats = 0;
        }
        return statsRes;
    }

}
