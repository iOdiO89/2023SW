#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

enum class UserType {
    General,
    Company
};

class User {
public:
    User(const string& id, const string& password, UserType userType);
    virtual ~User() = default;

    string getId() const;
    string getPassword() const;
    bool isLoggedIn() const;
    void setLoggedIn(bool loggedIn);
    virtual UserType getUserType() const = 0;
    virtual void withdraw() = 0;
    virtual bool isActive() const = 0;

protected:
    string id;
    string password;
    bool loggedIn;
    UserType userType;
};

#endif
