#include "application.h"
#include <string>

string Recruit::getCompanyName()
{
    return companyName;
}

string Recruit::getTask()
{
    return task;
}

int Recruit::getNumber()
{
    return number;
}

string Recruit::getDeadline()
{
    return deadline;
}

Application::Application(string companyName, string businessNum, string task, int number, string deadline)
{
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->task = task;
    this->number = number;
    this->deadline = deadline;
}

string Application::getCompanyName()
{
    return companyName;
}

string Application::getBusinessNum()
{
    return businessNum;
}

string Application::getTask()
{
    return task;
}

int Application::getNumber()
{
    return number;
}

string Application::getDeadline()
{
    return deadline;
}

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

string CompanyMember::getBusinessNum()
{
    return companyName;
}

Recruit CompanyMember::getRecruit()
{
    return ownRecruit;
}

ApplicationCollection GeneralMember::getAC()
{
    return ownAC;
}

string GeneralMember::getID()
{
    return ID;
}

void GeneralMember::setOwnAC(ApplicationCollection AC)
{
    ownAC = AC;
}

CompanyMember CompanyMemberCollection ::getCMreference(int i)
{
    return arrCM[i];
}

vector<CompanyMember> CompanyMemberCollection::getArrCM()
{
    return arrCM;
}

GeneralMember GeneralMemberCollection::getGMreference(int i)
{
    return arrGM[i];
}

vector<GeneralMember> GeneralMemberCollection::getArrGM()
{
    return arrGM;
}

void GeneralMemberCollection::setArrGM(vector<GeneralMember> newArrGM)
{
    arrGM = newArrGM;
}

void ApplyRecruitUI ::applyNewRecruit(string ID)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    fprintf(out_fp, "4.2. 채용 지원\n");

    vector<string> getInfo;
    ApplyRecruit *AR = new ApplyRecruit();
    getInfo = AR->newRecruit(ID, businessNum);
    fprintf(out_fp, "> %s %s %s\n", getInfo[0], getInfo[1], getInfo[2]);
}

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

void SearchApplyUI::searchApplication(string ID)
{
    fprintf(out_fp, "4.3. 지원 정보 조회\n");
    SearchApply *SA = new SearchApply();

    vector<Application> getApplist;
    getApplist = SA->showMemberApplication(ID);

    for (int i = 0; i < getApplist.size(); i++)
    {
        Application getApp = getApplist[i];
        fprintf(out_fp, "> %s %s %s %d %s\n", getApp.getCompanyName(), getApp.getBusinessNum(), getApp.getTask(), getApp.getNumber(), getApp.getDeadline());
    }
}

vector<Application> SearchApply::showMemberApplication(string ID)
{
    GeneralMember GM;
    vector<GeneralMember> arrGM = ownedGM->getArrGM();
    for (int i = 0; i < arrGM.size(); i++)
    {
        GM = ownedGM[i];
        if (GM.getID() == ID)
            break;
    }

    ApplicationCollection AC = GM.getAC();
    vector<Application> arrAC = AC.getArrAC();
    return arrAC;
}

void CancelApplyUI::selectApplication(string ID)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    fprintf(out_fp, "4.2. 지원 취소\n");

    tuple<string, string, string> getInfo;
    CancelApply *CA = new CancelApply();
    getInfo = CA->cancelApplication(ID, businessNum);
    fprintf(out_fp, "> %s %s %s %d %s\n", get<0>(getInfo), get<1>(getInfo), get<2>(getInfo));
}

tuple<string, string, string> CancelApply::cancelApplication(string ID, string businessNum)
{
    GeneralMember GM;
    vector<GeneralMember> arrGM = ownedGM->getArrGM();

    for (int i = 0; i < arrGM.size(); i++)
    {
        GM = arrGM[i];
        if (GM.getID() == ID)
        {
            ApplicationCollection AC = GM.getAC();
            tuple<string, string, string> tp = AC.deleteApply(businessNum);
            arrGM[i].setOwnAC(AC);
            ownedGM->setArrGM(arrGM);
            return tp;
        }
    }
}