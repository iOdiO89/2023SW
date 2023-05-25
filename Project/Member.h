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
    int isCompanyMember; // 1 = 회사회원, 2 = 일반회원


public:
    static vector<Member*> memList;
    string getID();
    string getPW();
    
    virtual void addNewRecruit(string, int, string);
    virtual vector<Recruit> listRecruit();


    virtual ~Member();
};