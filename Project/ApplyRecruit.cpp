#include "ApplyRecruit.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

vector<string> ApplyRecruit ::newRecruit(string ID, string businessNum)
{ // control class
    CompanyMember CM;
    Recruit R;
    vector<CompanyMember> arrCM = ownedCM->getArrCM();
    for (int i = 0; i < arrCM.size(); i++)
    {
        CM = arrCM[i];
        if (CM.getBusinessNum() == businessNum)
            break;
    }

    R = CM.getRecruit();
    string companyName = R.getCompanyName();
    string task = R.getTask();
    int number = R.getNumber();
    string deadline = R.getDeadline();

    GeneralMember GM;
    vector<GeneralMember> arrGM = ownedGM->getArrGM();
    for (int i = 0; i < arrGM.size(); i++)
    {
        GM = arrGM[i];
        if (GM.getID() == ID)
        {
            ApplicationCollection AC = GM.getAC();
            AC.addNewApply(companyName, businessNum, task, number, deadline);
            arrGM[i].setOwnAC(AC);
            ownedGM->setArrGM(arrGM);
            break;
        }
    }

    vector<string> getInfo;
    getInfo.push_back(companyName);
    getInfo.push_back(businessNum);
    getInfo.push_back(task);
    return getInfo;
}
