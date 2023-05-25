#include "StatsUI.h"

void StatsUI::checkStats(Member* currentMember)
{
    vector<tuple<string, string>> statInfo;
    Stats* rs = new Stats();
    statInfo = rs->showStats(currentMember);

    // output.txt에 출력
    fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "5.1. 지원 정보 통계" << endl;

        string line = "";
        for (int i = 0; i < statInfo.size(); i++) {
            string task = get<0>(statInfo[i]);
            string count = get<1>(statInfo[i]);
            line = "> " + task + count;
            writeFile << line << endl; //text 파일에 작성
            line = "";
        }
        writeFile.close();
    }
    return;
}