#ifndef JOIN_H
#define JOIN_H

#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include <cstdio>
#include <string>

#define MAX_STRING 32

class Join {
public:
    CompanyMember signUpCompanyMember(FILE* in_fp);
    GeneralMember signUpGeneralMember(FILE* in_fp);
    void writeToFile(const CompanyMember& companyMember, FILE* out_fp);
    void writeToFile(const GeneralMember& generalMember, FILE* out_fp);
};

#endif
