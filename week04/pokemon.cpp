#include "pokemon.h"

Pokemon::Pokemon()
{
	cout << "�⺻(���ϸ�) ������" << endl;
}

Pokemon::~Pokemon()
{
	cout << "�θ�Ŭ���� (���ϸ�) �Ҹ���" << endl; //�޸� ���� ����
}

void Pokemon::attack() const
{
	cout << "����" << endl;
}

