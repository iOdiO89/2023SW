#include "CompanyMember.h"
#include <vector>

class CompanyMemberCollection
{
private:
    vector<CompanyMember> arrCM;

public:
    CompanyMember getCMreference(int i);
    vector<CompanyMember> getArrCM();
};