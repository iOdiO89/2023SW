#include "Member.h"
#include "Recruit.h"

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