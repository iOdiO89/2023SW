#include "Join.h"

void showKindOfMem() // ȸ������ ���� �����ϱ�
{
	cout << "ȸ��ȸ���� �Ϲ�ȸ���߿� ������ �ֽʽÿ�." << endl;
}


vector<string> showInputForm() // ȸ������ ���� ����
{
	// memberNum: ȸ��ȸ���� �Ϲ�ȸ���� �����ϱ� ���� ���
	// input.txt�� 3��° ���ڰ� ���� �ϴ� �ڸ�
	if (memberNum == 1) //  ȸ��ȸ���� ���
	{
		cout << "ȸ���̸�, ����ڹ�ȣ, ���̵�, ��й�ȣ�� �Է����ֽʽÿ�." << endl;
		// JoinUI���� ���� input.txt ���� �Է� ����
	}
	else if (memberNum == 2) // �Ϲ�ȸ���� ���
	{
		cout << "�̸�, �ֹι�ȣ, ���̵�, ��й�ȣ�� �Է����ֽʽÿ�." << endl;
		// JoinUI���� ���� input.txt ���� �Է� ����
	}
}


void joinMem() // ȸ������ �Ϸ��ϱ�
{
	cout << "ȸ�������� �Ϸ�Ǿ����ϴ�." << endl;
}