#include "ApplyRecruit.h"


vector<string> ApplyRecruit ::newRecruit(string searchBusinessNum, Member* currentMember)
{ 
    vector<Recruit> recruitInfo;
    string companyName, task, deadline;
    int number;
    int size = Member::memList.size();
    for (int i = 0; i < size; i++)
    {   
        // 회사회원이면서 검색하려는 사업자번호와 일치하는 객체인 경우
        if(Member::memList[i]->getIsCompanyMember() ==1 
            && Member::memList[i]->getBusinessNum()==searchBusinessNum){

            // 해당 회사회원이 등록한 모든 채용정보 받아오기
            recruitInfo = Member::memList[i]->listRecruit();

            for (int i = 0; i < recruitInfo.size(); i++) {
                // 채용정보들에 대해 회사회원, 업무, 인원수, 마감일 정보 받아오기
                companyName = recruitInfo[i].getCompanyName();
                task = recruitInfo[i].getTask();
                number = recruitInfo[i].getNumber();
                deadline = recruitInfo[i].getDeadline();

                // 현재 로그인 중인 일반회원이 등록한 모든 지원 정보 받아온 후 새 지원정보를 추가
                vector<Application> application = currentMember->getApplicationArray();
                Application newApplication(companyName, searchBusinessNum, task, number, deadline); // 새로운 지원정보 생성
                application.push_back(newApplication);
                currentMember->setApplicationArray(application);
            }
            break;
        } 
    }

    vector<string> getInfo;
    getInfo.push_back(companyName);
    getInfo.push_back(searchBusinessNum);
    getInfo.push_back(task);
    return getInfo; // 새로 추가한 지원정보의 회사회원, 사업자정보, 업무를 반환
}
