#include "Join.h"
#include "GeneralUser.h"
#include "CompanyUser.h"
#include <iostream>

CompanyUser Join::signUpCompanyUser(FILE* in_fp) {
    char companyName[MAX_STRING];
    char businessNumber[MAX_STRING];
    char id[MAX_STRING];
    char password[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", companyName, businessNumber, id, password);

    CompanyUser companyUser(companyName, businessNumber, id, password);
    return companyUser;
}

GeneralUser Join::signUpGeneralUser(FILE* in_fp) {
    char name[MAX_STRING];
    char socialNumber[MAX_STRING];
    char id[MAX_STRING];
    char password[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", name, socialNumber, id, password);

    GeneralUser generalUser(name, socialNumber, id, password);
    return generalUser;
}

void Join::writeToFile(const CompanyUser& companyUser, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "1 %s %s %s %s\n", companyUser.getCompanyName().c_str(),
            companyUser.getBusinessNumber().c_str(), companyUser.getId().c_str(),
            companyUser.getPassword().c_str());
        fflush(out_fp);
    }
}

void Join::writeToFile(const GeneralUser& generalUser, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "2 %s %s %s %s\n", generalUser.getName().c_str(),
            generalUser.getSocialNumber().c_str(), generalUser.getId().c_str(),
            generalUser.getPassword().c_str());
        fflush(out_fp);
    }
}
