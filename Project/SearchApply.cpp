#include "SearchApply.h"


vector<tuple<string, string, string, int, string>> SearchApply::showMemberApplication(Member* currentMember)
{
    vector<Application> applicationInfo = currentMember->getApplicationArray();
    vector<tuple<string, string, string, int, string>> applicationDetail;
    
    string companyName, businessNum, task, deadline;
    int number;
    for (int i = 0; i < applicationInfo.size(); i++) {
        companyName = applicationInfo[i].getCompanyName();
        businessNum = applicationInfo[i].getBusinessNum();
        task = applicationInfo[i].getTask();
        number = applicationInfo[i].getNumber();
        deadline = applicationInfo[i].getDeadline();

        applicationDetail.push_back(make_tuple(companyName, businessNum, task, number, deadline));
    }

    return applicationDetail;
}
