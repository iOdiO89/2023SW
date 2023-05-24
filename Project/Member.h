#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

enum class UserType {
    General,
    Company
};

class Member {
public:
    Member(const string& id, const string& password, UserType MemberType);
    virtual ~Member() = default;

    string getId() const;
    string getPassword() const;
    bool isLoggedIn() const;
    void setLoggedIn(bool loggedIn);
    virtual UserType getMemberType() const = 0;
    virtual void withdraw() = 0;
    virtual bool isActive() const = 0;

protected:
    string id;
    string password;
    bool loggedIn;
    UserType MemberType;
};

#endif
