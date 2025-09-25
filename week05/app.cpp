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
	Animal* pa = new Animal();
	pa->makeSound();
	delete pa; //delete와 nullptr의 차이점 : delete는 메모리를 해제하고, nullptr는 포인터를 null로 설정함
	pa = nullptr; // delete를 해도 포인터는 여전히 주소를 가리키고 있기 때문에 nullptr로 설정해줌

	pa = new Dog();
	pa->makeSound();


	return 0;
}