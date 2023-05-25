#include "StatsUI.h"

void StatsUI::checkStats(Member* currentMember)
{
    vector<tuple<string, string>> statInfo;
    Stats* rs = new Stats();
    statInfo = rs->showStats(currentMember);

    fstream writeFile("output.txt", ios::app);
    if (writeFile.is_open()) {
        writeFile << "5.1. ���� ���� ���" << endl;

        string line = "";
        for (int i = 0; i < statInfo.size(); i++) {
            string task = get<0>(statInfo[i]);
            string count = get<1>(statInfo[i]);
            line = "> " + task + count;
            writeFile << line << endl; //text ���Ͽ� �ۼ�
            line = "";
        }
        writeFile.close();
    }
    return;
}