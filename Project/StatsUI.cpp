#include "StatsUI.h"

void StatsUI::checkStats(Member* currentMember)
{
	tuple<string, string> statInfo;
	Stats* rs = new Stats();
	statInfo = rs->showStats(Member* currentMember);
	//statInfo�� �޾ƿ� �����ͷ� output.file�� write�ϴ� �Է¹� �ۼ�...
}