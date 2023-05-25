#include "Join.h"

tuple<int, string, int, string, string> Join::joinMem(int isCompanyMember, string temp1, int temp2, string ID, string PW) {
	if (isCompanyMember==1) {
		CompanyMember *newCompanyMember = new CompanyMember(temp1, temp2, ID, PW);
		Member::memList.push_back(newCompanyMember);
		return make_tuple(1, temp1, temp2, ID, PW);
	}
	else { // isCompanyMember
		GeneralMember *newGeneralMember = new GeneralMember(temp1, temp2, ID, PW);
		Member::memList.push_back(newGeneralMember);
		return make_tuple(2, temp1, temp2, ID, PW);
	}
}
