#ifndef GENERALUSER_H
#define GENERALUSER_H

#include "User.h"

using namespace std;

class GeneralUser : public User {
public:
    GeneralUser(const string& name, const string& socialNumber, const string& id, const string& password);
    UserType getUserType() const override;
    void withdraw() override;
    bool isActive() const override;

    string getName() const;
    string getSocialNumber() const;

private:
    string name;
    string socialNumber;
};

#endif