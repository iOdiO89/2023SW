#include "Join.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <iostream>

CompanyMember Join::signUpCompanyMember(FILE* in_fp) {
    char companyName[MAX_STRING];
    char businessNumber[MAX_STRING];
    char id[MAX_STRING];
    char password[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", companyName, businessNumber, id, password);

    CompanyMember companyMember(companyName, businessNumber, id, password);
    return companyMember;
}

GeneralMember Join::signUpGeneralMember(FILE* in_fp) {
    char name[MAX_STRING];
    char socialNumber[MAX_STRING];
    char id[MAX_STRING];
    char password[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", name, socialNumber, id, password);

    GeneralMember generalMember(name, socialNumber, id, password);
    return generalMember;
}

void Join::writeToFile(const CompanyMember& companyMember, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "1 %s %s %s %s\n", companyMember.getCompanyName().c_str(),
            companyMember.getBusinessNumber().c_str(), companyMember.getId().c_str(),
            companyMember.getPassword().c_str());
        fflush(out_fp);
    }
}

void Join::writeToFile(const GeneralMember& generalMember, FILE* out_fp) {
    if (out_fp) {
        fprintf(out_fp, "2 %s %s %s %s\n", generalMember.getName().c_str(),
            generalMember.getSocialNumber().c_str(), generalMember.getId().c_str(),
            generalMember.getPassword().c_str());
        fflush(out_fp);
    }
}
