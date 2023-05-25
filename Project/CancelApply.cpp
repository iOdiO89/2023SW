#include "CancelApply.h"
#include "GeneralMember.h"
#include "ApplicationCollection.h"

tuple<string, string, string> CancelApply::cancelApplication(string searchBusinessNum, Member* currentMember)
{
    // 현재 로그인 중인 일반회원이 지원한 모든 지원정보를 받아오기
    vector<Application> applicationInfo = currentMember->getApplicationArray();
    string companyName, businessNum, task;

    for (int i = 0; i < applicationInfo.size(); i++) {
        // 지원자의 모든 지원정보 중 검색한 사업자번호가 일치하는 경우
        if (applicationInfo[i].getBusinessNum() == searchBusinessNum) {
            // 회사이름, 사업자번호, 업무를 받아오기
            companyName = applicationInfo[i].getCompanyName();
            businessNum = applicationInfo[i].getBusinessNum();
            task = applicationInfo[i].getTask(); 

            // 지원자의 모든 지원정보가 저장되어있는 벡터에서 해당 지원정보 삭제하여 덮어씌움
            applicationInfo.erase(applicationInfo.begin() + i);
            currentMember->setApplicationArray(applicationInfo);

            return make_tuple(companyName, businessNum, task); // 삭제하려는 지원정보의 회사이름, 사업자번호, 업무 반환
        }
    }
}