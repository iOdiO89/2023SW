#include "SearchApplyUI.h"


void SearchApplyUI::searchApplication(Member* currentMember)
{   
    SearchApply* SA = new SearchApply();

    vector<tuple<string, string, string, int, string>> getApplist;
    getApplist = SA->showMemberApplication(currentMember);

    string line = "";
    string companyName, businessNum, task, number, deadline;
	fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "4.3. 지원 정보 조회" << endl;

        for (int i = 0; i < getApplist.size(); i++) {
            companyName = get<0>(getApplist[i]) + " ";
            businessNum = get<1>(getApplist[i]) + " ";
            task = get<2>(getApplist[i]) + " ";
            number = to_string(get<3>(getApplist[i])) + " ";
            deadline = get<4>(getApplist[i]);

            line = companyName + businessNum + task + number + deadline;
            writeFile << line << endl;
        }
        writeFile.close();
    }
}