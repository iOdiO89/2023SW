#include "ApplyRecruit.h"


vector<string> ApplyRecruit ::newRecruit(string searchBusinessNum, Member* currentMember)
{ 
    vector<Recruit> recruitInfo;
    string companyName, task, deadline;
    int number;
    int size = Member::memList.size();
    for (int i = 0; i < size; i++)
    {   
        // ȸ��ȸ���̸鼭 �˻��Ϸ��� ����ڹ�ȣ�� ��ġ�ϴ� ��ü�� ���
        if(Member::memList[i]->getIsCompanyMember() ==1 
            && Member::memList[i]->getBusinessNum()==searchBusinessNum){

            recruitInfo = Member::memList[i]->listRecruit();

            for (int i = 0; i < recruitInfo.size(); i++) {
                companyName = recruitInfo[i].getCompanyName();
                task = recruitInfo[i].getTask();
                number = recruitInfo[i].getNumber();
                deadline = recruitInfo[i].getDeadline();

                vector<Application> application = currentMember->getApplicationArray();
                Application newApplication(companyName, searchBusinessNum, task, number, deadline);
                application.push_back(newApplication);
                currentMember->setApplicationArray(application);
            }
            break;
        } 
    }

    vector<string> getInfo;
    getInfo.push_back(companyName);
    getInfo.push_back(searchBusinessNum);
    getInfo.push_back(task);
    return getInfo;
}
