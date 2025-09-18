#include "pikachu.h"

Pikachu::Pikachu()
{
	cout << "기본(피카츄) 생성자" << endl;
}

Pikachu::~Pikachu()
{
	cout << "자식클래스 (피카츄) 소멸자" << endl;
}

void Pikachu::attack() const
{
	cout << "전기 공격" << endl;
}
