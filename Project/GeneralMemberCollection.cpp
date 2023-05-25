#include "GeneralMemberCollection.h"

GeneralMember GeneralMemberCollection::getGMreference(int i)
{
    return arrGM[i];
}

vector<GeneralMember> GeneralMemberCollection::getArrGM()
{
    return arrGM;
}

void GeneralMemberCollection::setArrGM(vector<GeneralMember> newArrGM)
{
    arrGM = newArrGM;
}