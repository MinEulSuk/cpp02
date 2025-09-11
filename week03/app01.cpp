/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// 베이스 클래스의 정의
class Pokemon
{
public:
	virtual void attack() const { cout << "공격" << endl; }
};
// 파생 클래스의 정의
class Pikachu : public Pokemon // 상속 is-a 관계
{
public:
	void attack() const override { cout << "전기 공격" << endl; }
};
int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}