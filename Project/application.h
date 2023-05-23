#include <iostream>
#include <string>
using namespace std;

#define INPUT_FILE_NAME "input.txt“
#define OUTPUT_FILE_NAME "output.txt"
FILE *in_fp = fopen(INPUT_FILE_NAME, "r+");
FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w+");

CompanyMemberCollection *ownedCM;
GeneralMemberCollection *ownedGM;

class Member
{
private:
    string ID;
    string PW;
};
////////////////////////////////////////////////////
class Recruit
{
private:
    string companyName;
    string task;
    int number;
    string deadline;

public:
    string getCompanyName();
    string getTask();
    int getNumber();
    string getDeadline();
};

class Application
{
private:
    string companyName;
    string businessNum;
    string task;
    int number;
    string deadline;

public:
    void setInfo(string companyName, string businessNum, string task, int number, string deadline);
    string getCompanyName();
    string getBusinessNum();
    string getTask();
    int getNumber();
    string getDeadline();
};

class ApplicationCollection
{
private:
    Application *arrAC;
    int num = 0;

public:
    void addNewApply(string companyName, string businessNum, string task, int number, string deadline);
    int getNum();
    Application getAppreference(int i);
    void deleteApply(int i);
};
////////////////////////////////////////////////////
class CompanyMember : public Member
{
private:
    string companyName;
    string businessNum;
    Recruit ownRecruit;

public:
    string getBusinessNum();
    Recruit getRecruit();
};

class GeneralMember : public Member
{
private:
    string name;
    string securityNum;
    ApplicationCollection ownAC;

public:
    string getID();
    ApplicationCollection getAC();
};

class CompanyMemberCollection
{
private:
    CompanyMember *arrCM;
    int num = 0;

public:
    CompanyMember getCMreference(int i);
    int getNum();
};

class GeneralMemberCollection : public GeneralMember
{
private:
    GeneralMember *arrGM;
    int num = 0;

public:
    GeneralMember getGMreference(int i);
    int getNum();
};
////////////////////////////////////////////////////
// 8. 지원하기
class ApplyRecruit
{
public:
    void newRecruit(string ID, string businessNum);
};

class ApplyRecruitUI
{
public:
    void applyNewRecruit(string ID);
};
////////////////////////////////////////////////////
// 9. 지원정보 조회하기
class SearchApplyUI
{
public:
    void searchApplication(string ID);
};

class SearchApply
{
public:
    void showMemberApplication(string ID);
};
////////////////////////////////////////////////////
// 10. 지원 취소하기
class CancelApplyUI
{
public:
    void selectApplication(string ID);
};

class CancelApply
{
public:
    void cancelApplication(string ID, string businessNum);
};