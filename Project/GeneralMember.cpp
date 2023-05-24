#include "GeneralMember.h"

ApplicationCollection GeneralMember::getAC()
{
    return ownAC;
}

string GeneralMember::getID()
{
    return ID;
}

void GeneralMember::setOwnAC(ApplicationCollection AC)
{
    ownAC = AC;
}