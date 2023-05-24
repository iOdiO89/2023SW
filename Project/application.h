#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <tuple>
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
    // 디테일 튜플로 반환하는 함수
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
    Application(string companyName, string businessNum, string task, int number, string deadline);
    string getCompanyName();
    string getBusinessNum();
    string getTask();
    int getNumber();
    string getDeadline();
};

class ApplicationCollection
{
private:
    vector<Application> arrAC;

public:
    void addNewApply(string companyName, string businessNum, string task, int number, string deadline);
    Application getAppreference(int i);
    tuple<string, string, string> deleteApply(string businessNum);
    vector<Application> getArrAC();
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
    ApplicationCollection getAC();
    string getID();
    void setOwnAC(ApplicationCollection AC);
};

class CompanyMemberCollection
{
private:
    vector<CompanyMember> arrCM;

public:
    CompanyMember getCMreference(int i);
    vector<CompanyMember> getArrCM();
};

class GeneralMemberCollection
{
private:
    vector<GeneralMember> arrGM;

public:
    GeneralMember getGMreference(int i);
    vector<GeneralMember> getArrGM();
    void setArrGM(vector<GeneralMember> newArrGM);
};
////////////////////////////////////////////////////
// 8. 지원하기
class ApplyRecruit
{
public:
    vector<string> newRecruit(string ID, string businessNum);
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
    vector<Application> showMemberApplication(string ID);
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
    tuple<string, string, string> cancelApplication(string ID, string businessNum);
};