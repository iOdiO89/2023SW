#include "Login.h"

tuple<string,string, Member*> Login::loginMem(string searchID, string searchPW) {
	string ID="", PW = "";
	int size = Member::memList.size();
	for (int i = 0; i < size; i++) {
		ID = Member::memList[i]->getID();
		PW = Member::memList[i]->getPW();

		if (ID == searchID && PW == searchPW) { // �ùٸ� ȸ�� ������ ã���� �ش� ȸ�������� ��ȯ
			return make_tuple(ID, PW, Member::memList[i]);
		}
	}
	Member* nullMember = NULL;
	return make_tuple(ID, PW, nullMember); // ȸ�� ����Ʈ�� ȸ�� ������ ���� ���
}