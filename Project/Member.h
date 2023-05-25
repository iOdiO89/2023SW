#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Recruit.h"

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
    
    virtual void addNewRecruit(string, int, string);
    virtual vector<Recruit> listRecruit();


    virtual ~Member();
};