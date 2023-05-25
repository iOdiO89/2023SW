#include "Join.h"

tuple<int, string, string, string, string> Join::joinMem(int isCompanyMember, string temp1, string temp2, string ID, string PW) {
	if (isCompanyMember==1) { // 회사회원 계정을 생성하려는 경우
		CompanyMember *newCompanyMember = new CompanyMember(temp1, temp2, ID, PW);
		Member::memList.push_back(newCompanyMember);
		return make_tuple(1, temp1, temp2, ID, PW);
	}
	else { // 일반회원 계정을 생성하려는 경우
		GeneralMember *newGeneralMember = new GeneralMember(temp1, temp2, ID, PW);
		Member::memList.push_back(newGeneralMember);
		return make_tuple(2, temp1, temp2, ID, PW);
	}
}
