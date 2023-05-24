#include "Member.h"
#include "ApplicationCollection.h"

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
