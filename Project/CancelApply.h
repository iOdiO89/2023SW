#include <iostream>
#include <tuple>
#include <vector>

#include "Member.h"

using namespace std;

class CancelApply
{
public:
    tuple<string, string, string> cancelApplication(string, Member*);
};