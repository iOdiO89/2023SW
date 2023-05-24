#include "JoinUI.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <iostream>

using namespace std;

void JoinUI::start(Join& j, FILE* in_fp, FILE* out_fp) {
    if (in_fp) {
        int MemberType;
        fscanf(in_fp, "%d", &MemberType);

        if (MemberType == 1) {
            CompanyMember cu = j.signUpCompanyMember(in_fp);
            cout << "ȸ�� ȸ�� ������ �Ϸ�Ǿ����ϴ�." << endl;
            j.writeToFile(cu, out_fp);
        }
        else if (MemberType == 2) {
            GeneralMember gu = j.signUpGeneralMember(in_fp);
            cout << "�Ϲ� ȸ�� ������ �Ϸ�Ǿ����ϴ�." << endl;
            j.writeToFile(gu, out_fp);
        }
    }
}
