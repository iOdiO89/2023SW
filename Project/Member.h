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
    int isCompanyMember; // 1 = 회사회원, 2 = 일반회원

public:
    static vector<Member*> memList;
    string getID();
    string getPW();
    int getIsCompanyMember();

    // 회사회원용
    virtual void addNewRecruit(string, int, string);
    virtual vector<Recruit> listRecruit();
    virtual string getCompanyName();
    virtual string getBusinessNum();
    virtual string getTask();

    //일반회원용
    virtual vector<Application> getApplicationArray();
    virtual void setApplicationArray(vector<Application>);

};