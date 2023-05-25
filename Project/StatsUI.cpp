#include "StatsUI.h"

void StatsUI::checkStats(Member* currentMember)
{
	tuple<string, string> statInfo;
	Stats* rs = new Stats();
	statInfo = rs->showStats(Member* currentMember);
	//statInfo로 받아온 데이터로 output.file에 write하는 입력문 작성...
}