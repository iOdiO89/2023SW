#include "ApplyRecruitUI.h"
#include <vector>

void ApplyRecruitUI ::applyNewRecruit(string ID, FILE *in_fp, FILE *out_fp)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    fprintf(out_fp, "4.2. 채용 지원\n");

    vector<string> getInfo;
    ApplyRecruit *AR = new ApplyRecruit();
    getInfo = AR->newRecruit(ID, businessNum);
    fprintf(out_fp, "> %s %s %s\n", getInfo[0], getInfo[1], getInfo[2]);
}
