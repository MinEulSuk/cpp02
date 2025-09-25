/**************************************************************
 * typeid 연산자로 클래스 이름을 확인하는 프로그램            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0 { //순수 가상 함수
		cout << "동물이 소리를 냅니다.\n";
	};
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "멍멍\n";
	};
};
class Cat : public Animal {
public:
	void makeSound() {
		cout << "냐옹\n";
	};
};
int main()
{
	Animal animal;//순수	 가상 함수는 객체 생성 불가
	animal.makeSound();




	return 0;
}