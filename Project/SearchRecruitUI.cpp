#include "SearchRecruitUI.h"


void SearchRecruitUI::clickSearchRecruit(string searchCompanyName)
{   
    SearchRecruit searchRecruit;
    vector<tuple<string, string, string, int, string>> recruitInfo;

    recruitInfo = searchRecruit.callRecruitInfo(searchCompanyName);

    string companyName, businessNum, task, number, deadline;
    string line;

    fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "4.1. 채용 정보 검색" << endl;

        for (int i = 0; i < recruitInfo.size(); i++) {
            companyName = get<0>(recruitInfo[i]) + " ";
            businessNum = get<1>(recruitInfo[i]) + " ";
            task = get<2>(recruitInfo[i]) + " ";
            number = to_string(get<3>(recruitInfo[i])) + " ";
            deadline = get<4>(recruitInfo[i]);

            line = companyName + businessNum + task + number + deadline;
            writeFile << line << endl;
        }
        writeFile.close();
    }
}