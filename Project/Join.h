#include <iostream>
#include <tuple>

#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"

using namespace std;

class Join {
public:
	tuple<int, string, int, string, string> joinMem(int, string, int, string, string);
};
