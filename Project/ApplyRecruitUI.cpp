#include "ApplyRecruitUI.h"

void ApplyRecruitUI ::applyNewRecruit(string businessNum, Member* currentMember)
{
	vector<string> getInfo;
    ApplyRecruit* AR = new ApplyRecruit();
    getInfo = AR->newRecruit(businessNum, currentMember);

	fstream writeFile("output.txt", ios::app);
	if (writeFile.is_open()) {
		writeFile << "4.2. 채용 지원" << endl;
		writeFile << "> " + getInfo[0] + " " + getInfo[1] + " " + getInfo[2] << endl;
		writeFile.close();
	}
}
