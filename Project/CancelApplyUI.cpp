#include "CancelApplyUI.h"

void CancelApplyUI::selectApplication(string ID, FILE *in_fp, FILE *out_fp)
{
    string businessNum;
    fscanf(in_fp, "%s", businessNum);

    fprintf(out_fp, "4.2. 지원 취소\n");

    tuple<string, string, string> getInfo;
    CancelApply *CA = new CancelApply();
    getInfo = CA->cancelApplication(ID, businessNum);
    fprintf(out_fp, "> %s %s %s %d %s\n", get<0>(getInfo), get<1>(getInfo), get<2>(getInfo));
}