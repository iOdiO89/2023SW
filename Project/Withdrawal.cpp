#include "Withdrawal.h"

string Withdrawal::withdrawalMem(Member* currentMember) {
    // 현재 로그인 되어있는 계정의 ID 받아오기
    string ID = currentMember->getID(); 

    int size = Member::memList.size();
    for (int i = 0; i < size; i++) {
        if (currentMember == Member::memList[i]) {
            Member::memList.erase(Member::memList.begin() + i); // 회원 정보 리스트에서 삭제
        }

    }

    delete currentMember;
    return ID;
}

