#include "SearchApply.h"
#include "GeneralMember.h"
#include "ApplicationCollection.h"

vector<Application> SearchApply::showMemberApplication(string ID)
{
    GeneralMember GM;
    vector<GeneralMember> arrGM = ownedGM->getArrGM();
    for (int i = 0; i < arrGM.size(); i++)
    {
        GM = ownedGM[i];
        if (GM.getID() == ID)
            break;
    }

    ApplicationCollection AC = GM.getAC();
    vector<Application> arrAC = AC.getArrAC();
    return arrAC;
}
