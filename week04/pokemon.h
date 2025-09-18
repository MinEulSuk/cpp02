#include <iostream>
#include <string>
using namespace std;

//class Pokemon
//{
//public:
//	Pokemon() { cout << "기본(포켓몬) 생성자" << endl; }
//	virtual ~Pokemon() { cout << "부모클래스 (포켓몬) 소멸자" << endl; } //메모리 누수 방지
//	virtual void attack() const { cout << "공격" << endl; }
//}; 

class Pokemon
{
public:
	Pokemon();
	virtual ~Pokemon();
	virtual void attack() const;
};