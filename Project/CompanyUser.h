#ifndef COMPANYUSER_H
#define COMPANYUSER_H

#include "User.h"

using namespace std;

class CompanyUser : public User {
public:
    CompanyUser(const string& companyName, const string& businessNumber, const string& id, const string& password);
    UserType getUserType() const override;
    void withdraw() override;
    bool isActive() const override;

    string getCompanyName() const;
    string getBusinessNumber() const;

private:
    string companyName;
    string businessNumber;
};

#endif
