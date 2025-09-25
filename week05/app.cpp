/**************************************************************
 * typeid 연산자로 클래스 이름을 확인하는 프로그램            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
		void makeSound() {
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
	Animal a;
	Dog d;

	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}