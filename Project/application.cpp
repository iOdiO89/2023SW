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

void Application::setInfo(string companyName, string businessNum, string task, int number, string deadline)
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
    arrAC[num].setInfo(companyName, businessNum, task, number, deadline);
    num++;
}

int ApplicationCollection::getNum()
{
    return num;
}

Application ApplicationCollection::getAppreference(int i)
{
    return arrAC[i];
}

void ApplicationCollection::deleteApply(int i)
{
    arrAC[i].setInfo(NULL, NULL, NULL, NULL, NULL);
}

Recruit CompanyMember::getRecruit()
{
    return ownRecruit;
}

CompanyMember CompanyMemberCollection ::getCMreference(int i)
{
    return arrCM[i];
}

int CompanyMemberCollection::getNum()
{
    return num;
}

GeneralMember GeneralMemberCollection::getGMreference(int i)
{
    return arrGM[i];
}

int GeneralMemberCollection::getNum()
{
    return num;
}

void ApplyRecruitUI ::applyNewRecruit(string ID)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    ApplyRecruit *AR = new ApplyRecruit();
    AR->newRecruit(ID, businessNum);
}

void ApplyRecruit ::newRecruit(string ID, string businessNum)
{ // control class
    CompanyMember CM;
    Recruit R;
    for (int i = 0; i < ownedCM->getNum(); i++)
    {
        CM = ownedCM->getCMreference(i);
        if (CM.getBusinessNum() == businessNum)
            break;
    }

    R = CM.getRecruit();
    string companyName = R.getCompanyName();
    string task = R.getTask();
    int number = R.getNumber();
    string deadline = R.getDeadline();

    GeneralMember GM;
    ApplicationCollection AC;
    for (int i = 0; i < ownedGM->getNum(); i++)
    {
        GM = ownedGM->getGMreference(i);
        if (GM.getID() == ID)
            break;
    }

    AC = GM.getAC();
    AC.addNewApply(companyName, businessNum, task, number, deadline);

    fprintf(out_fp, "%s %s %s\n", companyName, businessNum, ID, task);
}

void SearchApplyUI::searchApplication(string ID)
{
    SearchApply *SA = new SearchApply();
    SA->showMemberApplication(ID);
}

void SearchApply::showMemberApplication(string ID)
{
    GeneralMember GM;
    for (int i = 0; i < ownedGM->getNum(); i++)
    {
        GM = ownedGM->getGMreference(i);
        if (GM.getID() == ID)
            break;
    }

    ApplicationCollection AC = GM.getAC();
    for (int i = 0; i < AC.getNum(); i++)
    {
        Application app = AC.getAppreference(i);
        string companyName = app.getCompanyName();
        string businessNum = app.getBusinessNum();
        string task = app.getTask();
        int number = app.getNumber();
        string deadline = app.getDeadline();
        fprintf(out_fp, "%s %s %s %s %s\n", companyName, businessNum, task, number, deadline);
    }
}

void CancelApplyUI::selectApplication(string ID)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    CancelApply *CA = new CancelApply();
    CA->cancelApplication(ID, businessNum);
}

void CancelApply::cancelApplication(string ID, string businessNum)
{
    GeneralMember GM;
    for (int i = 0; i < ownedGM->getNum(); i++)
    {
        GM = ownedGM->getGMreference(i);
        if (GM.getID() == ID)
            break;
    }

    ApplicationCollection AC = GM.getAC();
    for (int i = 0; i < AC.getNum(); i++)
    {
        Application app = AC.getAppreference(i);
        string getBusinessNum = app.getBusinessNum();
        if (businessNum == getBusinessNum)
        {
            AC.deleteApply(i);
            string getCompanyName = app.getCompanyName();
            string getTask = app.getTask();
            fprintf(out_fp, "%s %s %s\n", getCompanyName, businessNum, getTask);
            break;
        }

        string task = app.getTask();
        int number = app.getNumber();
        string deadline = app.getDeadline();
    }
}