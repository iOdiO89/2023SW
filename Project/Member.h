#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Recruit.h"
#include "Application.h"

using namespace std;

class Member {
protected:
    string ID;
    string PW;
    int isCompanyMember; // 1 = ȸ��ȸ��, 2 = �Ϲ�ȸ��

public:
    static vector<Member*> memList;
    string getID();
    string getPW();
    int getIsCompanyMember();

    // ȸ��ȸ����
    virtual void addNewRecruit(string, int, string);
    virtual vector<Recruit> listRecruit();
    virtual string getCompanyName();
    virtual string getBusinessNum();
    virtual string getTask();

    //�Ϲ�ȸ����
    virtual vector<Application> getApplicationArray();
    virtual void setApplicationArray(vector<Application>);

};