#include "Login.h"

tuple<string,string, Member*> Login::loginMem(string searchID, string searchPW) {
	string ID="", PW = "";
	int size = Member::memList.size();
	for (int i = 0; i < size; i++) {
		ID = Member::memList[i]->getID();
		PW = Member::memList[i]->getPW();

		if (ID == searchID && PW == searchPW) { // 올바른 회원 정보를 찾으면 해당 회원정보를 반환
			return make_tuple(ID, PW, Member::memList[i]); // ID, PW, 찾은 회원 객체 반환
		}
	}
	Member* nullMember = NULL;
	return make_tuple(ID, PW, nullMember); // 회원 리스트에 회원 정보가 없는 경우 (에러처리)
}