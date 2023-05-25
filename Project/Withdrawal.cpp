#include "Withdrawal.h"

string Withdrawal::withdrawalMem(Member* currentMember) {
    // 현재 로그인 되어있는 계정의 ID 받아오기
    string ID = currentMember->getID(); 

    for (int i = 0; i < Member::memList.size(); ) {
        if (currentMember == Member::memList[i]) {
            Member::memList.erase(Member::memList.begin() + i); // 회원 정보 리스트에서 삭제
        }
        else {
            i++;
        }

    }

    return ID;
}

