#pragma once
#include "squirtle.h"

Squirtle::Squirtle()
{
	cout << "�⺻(���α�) ������" << endl;
}

Squirtle::~Squirtle()
{
	cout << "�ڽ�Ŭ���� (���α�) �Ҹ���" << endl;
}

void Squirtle::attack() const
{
	cout << "������ ����" << endl;
}
