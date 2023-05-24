#include "CancelApply.h"
#include "GeneralMember.h"
#include "ApplicationCollection.h"

tuple<string, string, string> CancelApply::cancelApplication(string ID, string businessNum)
{
    GeneralMember GM;
    vector<GeneralMember> arrGM = ownedGM->getArrGM();

    for (int i = 0; i < arrGM.size(); i++)
    {
        GM = arrGM[i];
        if (GM.getID() == ID)
        {
            ApplicationCollection AC = GM.getAC();
            tuple<string, string, string> tp = AC.deleteApply(businessNum);
            arrGM[i].setOwnAC(AC);
            ownedGM->setArrGM(arrGM);
            return tp;
        }
    }
}