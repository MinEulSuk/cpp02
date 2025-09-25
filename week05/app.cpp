/**************************************************************
 * typeid 연산자로 클래스 이름을 확인하는 프로그램            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() {
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
	Animal* pa = new Dog(); //자식클래스의 객체를 부모클래스 포인터로 참조 , 업캐스팅
	pa->makeSound(); // 가상함수가 아니므로 부모클래스의 멤버함수 호출
	cout << pa << endl;
	Cat* pc = (Cat*)pa;//위험한 행동
	pc->makeSound(); // 고양이가 출력되어야 하는데 강제 형변환으로 인해 잘못된 결과 출력 
	cout << pc << endl;
	delete pc;
	pc = nullptr;



	//Dog* pd = (Dog*)pa; //부모클래스 포인터를 자식클래스 포인터로 형변환 , 다운캐스팅 (old,C스타일)
	//Dog* pd = dynamic_cast<Dog*>(pa); //다운캐스팅 (modern, C++스타일)
	//pd->makeSound(); // 자식클래스의 멤버함수 호출
	//delete pd;
	//pd = nullptr;

	return 0;

	//git reset --hard HEAD~삭제할커밋개수
}