#pragma once
#include "squirtle.h"

Squirtle::Squirtle()
{
	cout << "기본(꼬부기) 생성자" << endl;
}

Squirtle::~Squirtle()
{
	cout << "자식클래스 (꼬부기) 소멸자" << endl;
}

void Squirtle::attack() const
{
	cout << "물대포 공격" << endl;
}
