#include "Withdrawal.h"

string Withdrawal::withdrawalMem(Member* currentMember) {
    string ID = currentMember->getID();

    int size = Member::memList.size();
    for (int i = 0; i < size; i++) {
        if (currentMember == Member::memList[i]) {
            Member::memList.erase(Member::memList.begin() + i); // ȸ�� ���� ����Ʈ���� ����
        }

    }

    delete currentMember;
    return ID;
}

