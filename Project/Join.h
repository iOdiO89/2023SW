#ifndef JOIN_H
#define JOIN_H

#include "User.h"
#include "GeneralUser.h"
#include "CompanyUser.h"
#include <cstdio>
#include <string>

#define MAX_STRING 32

class Join {
public:
    CompanyUser signUpCompanyUser(FILE* in_fp);
    GeneralUser signUpGeneralUser(FILE* in_fp);
    void writeToFile(const CompanyUser& companyUser, FILE* out_fp);
    void writeToFile(const GeneralUser& generalUser, FILE* out_fp);
};

#endif
