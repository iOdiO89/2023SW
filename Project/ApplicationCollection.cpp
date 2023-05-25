#include "ApplicationCollection.h"

void ApplicationCollection::addNewApply(string companyName, string businessNum, string task, int number, string deadline)
{
    Application newApplication(companyName, businessNum, task, number, deadline);
    arrAC.push_back(newApplication);
}

Application ApplicationCollection::getAppreference(int i)
{
    return arrAC[i];
}

tuple<string, string, string> ApplicationCollection::deleteApply(string businessNum)
{
    for (auto it = arrAC.begin(); it != arrAC.end(); it++)
    {
        if (it->getBusinessNum() == businessNum)
        {
            arrAC.erase(it);
            return make_tuple(it->getCompanyName(), businessNum, it->getTask());
        }
    }
}

vector<Application> ApplicationCollection::getArrAC()
{
    return arrAC;
}