#include <iostream>
#include <string>
#include "pokemon.h"
using namespace std;

// 파생 클래스의 정의
class Pikachu : public Pokemon // 상속 is-a 관계
{
public:
	Pikachu();
	~Pikachu();
	void attack() const;
};

//// 파생 클래스의 정의
//class Pikachu : public Pokemon // 상속 is-a 관계
//{
//public:
//	Pikachu() { cout << "기본(피카츄) 생성자" << endl; }
//	~Pikachu() { cout << "자식클래스 (피카츄) 소멸자" << endl; }
//	void attack() const { cout << "전기 공격" << endl; }
//};