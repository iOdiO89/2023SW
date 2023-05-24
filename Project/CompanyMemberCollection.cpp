#include "CompanyMemmberCollection.h"

CompanyMember CompanyMemberCollection ::getCMreference(int i)
{
    return arrCM[i];
}

vector<CompanyMember> CompanyMemberCollection::getArrCM()
{
    return arrCM;
}