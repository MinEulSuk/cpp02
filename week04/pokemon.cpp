#include "pokemon.h"

Pokemon::Pokemon()
{
	cout << "기본(포켓몬) 생성자" << endl;
}

Pokemon::~Pokemon()
{
	cout << "부모클래스 (포켓몬) 소멸자" << endl; //메모리 누수 방지
}

void Pokemon::attack() const
{
	cout << "공격" << endl;
}

