#include "Join.h"

void showKindOfMem() // 회원가입 유형 선택하기
{
	cout << "회사회원과 일반회원중에 선택해 주십시오." << endl;
}


vector<string> showInputForm() // 회원가입 정보 적기
{
	// memberNum: 회사회원과 일반회원을 구분하기 위한 상수
	// input.txt의 3번째 문자가 들어가야 하는 자리
	if (memberNum == 1) //  회사회원의 경우
	{
		cout << "회사이름, 사업자번호, 아이디, 비밀번호를 입력해주십시오." << endl;
		// JoinUI에서 읽은 input.txt 정보 입력 구현
	}
	else if (memberNum == 2) // 일반회원의 경우
	{
		cout << "이름, 주민번호, 아이디, 비밀번호를 입력해주십시오." << endl;
		// JoinUI에서 읽은 input.txt 정보 입력 구현
	}
}


void joinMem() // 회원가입 완료하기
{
	cout << "회원가입이 완료되었습니다." << endl;
}