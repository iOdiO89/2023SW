#include "SearchApply.h"


vector<tuple<string, string, string, int, string>> SearchApply::showMemberApplication(Member* currentMember)
{
    // 현재 로그인한 일반회원이 가지고 있는 모든 지원정보를 받아옴
    vector<Application> applicationInfo = currentMember->getApplicationArray();
    vector<tuple<string, string, string, int, string>> applicationDetail;
    
    // 가지고 있는 모든 지원정보에 대해 회사이름, 사업자번호, 업무, 인원수, 마감일 정보를 받아옴
    string companyName, businessNum, task, deadline;
    int number;
    for (int i = 0; i < applicationInfo.size(); i++) {
        companyName = applicationInfo[i].getCompanyName();
        businessNum = applicationInfo[i].getBusinessNum();
        task = applicationInfo[i].getTask();
        number = applicationInfo[i].getNumber();
        deadline = applicationInfo[i].getDeadline();

        applicationDetail.push_back(make_tuple(companyName, businessNum, task, number, deadline));
    }

    return applicationDetail; // 지원정보들에 대한 정보를 반환
}
