#include "JoinUI.h"
#include "GeneralUser.h"
#include "CompanyUser.h"
#include <iostream>

using namespace std;

void JoinUI::start(Join& j, FILE* in_fp, FILE* out_fp) {
    if (in_fp) {
        int userType;
        fscanf(in_fp, "%d", &userType);

        if (userType == 1) {
            CompanyUser cu = j.signUpCompanyUser(in_fp);
            cout << "ȸ�� ȸ�� ������ �Ϸ�Ǿ����ϴ�." << endl;
            j.writeToFile(cu, out_fp);
        }
        else if (userType == 2) {
            GeneralUser gu = j.signUpGeneralUser(in_fp);
            cout << "�Ϲ� ȸ�� ������ �Ϸ�Ǿ����ϴ�." << endl;
            j.writeToFile(gu, out_fp);
        }
    }
}
