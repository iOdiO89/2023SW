#include "SearchApplyUI.h"
#include "Application.h"
#include <vector>

void SearchApplyUI::searchApplication(string ID, FILE *in_fp, FILE *out_fp)
{
    fprintf(out_fp, "4.3. 지원 정보 조회\n");
    SearchApply *SA = new SearchApply();

    vector<Application> getApplist;
    getApplist = SA->showMemberApplication(ID);

    for (int i = 0; i < getApplist.size(); i++)
    {
        Application getApp = getApplist[i];
        fprintf(out_fp, "> %s %s %s %d %s\n", getApp.getCompanyName(), getApp.getBusinessNum(), getApp.getTask(), getApp.getNumber(), getApp.getDeadline());
    }
}