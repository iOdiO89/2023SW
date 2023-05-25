#include "Stats.h"

vector<tuple<string, string>> Stats::showStats(Member* currentMember)
{
	vector<string> taskVector;
	int typeOfMember;	//멤버 타입 구별하기 위한 변수
	typeOfMember = currentMember->getIsCompany(); 

	if (typeOfMember == 1) {	//회사회원
		vector<Recruit> recruitList = currentMember->listRecruit();
		for (int i = 0; i < sizeof(recruitList); i++) {
			for (int j = 0; j < sizeof(taskVector); j++) {
				if (recruitList[i].getTask() == taskVector[j]) break
				else taskVector.push_back(recruitList[i]->getTask());
			}
		}
		
	}
}