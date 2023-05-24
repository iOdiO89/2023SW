#ifndef GENERALMEMBER_H
#define GENERALMENBER_H

#include "Member.h"

using namespace std;

class GeneralMember : public Member {
public:
    GeneralMember(const string& name, const string& socialNumber, const string& id, const string& password);
    UserType getMemberType() const override;
    void withdraw() override;
    bool isActive() const override;

    string getName() const;
    string getSocialNumber() const;

private:
    string name;
    string socialNumber;
};

#endif