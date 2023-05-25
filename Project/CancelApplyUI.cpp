#include "CancelApplyUI.h"

void CancelApplyUI::selectApplication(string businessNum, Member* currentMember)
{
    tuple<string, string, string> getInfo;
    CancelApply *CA = new CancelApply();
    getInfo = CA->cancelApplication(businessNum, currentMember);
   
    fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "4.4. 지원 취소" << endl;
        writeFile << get<0>(getInfo) + " " + get<1>(getInfo) + " " + get<2>(getInfo) << endl;

        writeFile.close();
    }
}