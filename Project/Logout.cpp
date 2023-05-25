#include "Logout.h"

string Logout::logoutMem(Member* currentMember) {
	return currentMember->getID(); // 현재 로그인 중인 계정의 ID 반환
}
