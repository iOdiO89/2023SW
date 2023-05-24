#include "GeneralMember.h"

class GeneralMemberCollection
{
private:
    vector<GeneralMember> arrGM;

public:
    GeneralMember getGMreference(int i);
    vector<GeneralMember> getArrGM();
    void setArrGM(vector<GeneralMember> newArrGM);
};