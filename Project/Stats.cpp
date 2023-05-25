#include "Stats.h"

vector<tuple<string, string>> Stats::showStats(Member* currentMember)
{
    vector<string> taskVector;
    vector<Member*> listOfMember;
    int typeOfMember;   //��� Ÿ�� �����ϱ� ���� ����
    typeOfMember = currentMember->getIsCompanyMember();

    if (typeOfMember == 1) {   //ȸ��ȸ��
        vector<Recruit> recruitList = currentMember->listRecruit();
        string companyName = currentMember->getCompanyName();

        for (int i = 0; i < recruitList.size(); i++) {
            taskVector.push_back(recruitList[i].getTask());
        }

        vector<int> count(taskVector.size(), 0);
        listOfMember = Member::memList;

        for (int j = 0; j < listOfMember.size(); j++) {
            if (listOfMember[j]->getIsCompanyMember() == 2) { //�Ϲ�ȸ������ Ȯ��
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

    else // �Ϲ�ȸ���� ���
    {
        vector<Application> applicationInfo = currentMember->getApplicationArray(); // �ڽ��� ������ �������� ���� ��������
        vector<string> taskVector, taskVectorUnique;
        for (int i = 0; i < applicationInfo.size(); i++) {
            taskVector.push_back(applicationInfo[i].getTask());
        }

        //taskVectorUnique �ߺ��� ����
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
