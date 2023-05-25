#include "CancelApply.h"
#include "GeneralMember.h"
#include "ApplicationCollection.h"

tuple<string, string, string> CancelApply::cancelApplication(string searchBusinessNum, Member* currentMember)
{
    vector<Application> applicationInfo = currentMember->getApplicationArray();
    string companyName, businessNum, task;

    for (int i = 0; i < applicationInfo.size(); i++) {
        if (applicationInfo[i].getBusinessNum() == searchBusinessNum) {
            companyName = applicationInfo[i].getCompanyName();
            businessNum = applicationInfo[i].getBusinessNum();
            task = applicationInfo[i].getTask(); 

            applicationInfo.erase(applicationInfo.begin() + i);
            currentMember->setApplicationArray(applicationInfo);

            return make_tuple(companyName, businessNum, task);
        }
    }
}