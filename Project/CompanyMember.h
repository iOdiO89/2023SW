#ifndef COMPANYMEMBER_H
#define COMPANYMEMBER_H

#include "Member.h"

using namespace std;

class CompanyMember : public Member {
public:
    CompanyMember(const string& companyName, const string& businessNumber, const string& id, const string& password);
    UserType getMemberType() const override;
    void withdraw() override;
    bool isActive() const override;

    string getCompanyName() const;
    string getBusinessNumber() const;

private:
    string companyName;
    string businessNumber;
};

#endif
