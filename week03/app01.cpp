/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
public:
	Pokemon() { cout << "기본(포켓몬) 생성자" << endl; }
	virtual ~Pokemon() { cout << "부모클래스 (포켓몬) 소멸자" << endl; }
	virtual void attack() const { cout << "공격" << endl; }
};
// 파생 클래스의 정의
class Pikachu : public Pokemon // 상속 is-a 관계
{
public:
	Pikachu() { cout << "기본(피카츄) 생성자" << endl; }
	~Pikachu() { cout << "자식클래스 (피카츄) 소멸자"<<endl; }
	void attack() const { cout << "전기 공격" << endl; }
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