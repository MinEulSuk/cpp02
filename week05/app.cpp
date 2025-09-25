/**************************************************************
 * typeid �����ڷ� Ŭ���� �̸��� Ȯ���ϴ� ���α׷�            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
		void makeSound() {
			cout << "������ �Ҹ��� ���ϴ�.\n";
		};
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "�۸�\n";
	};
};
class Cat : public Animal {
public:
	void makeSound() {
		cout << "�Ŀ�\n";
	};
};
int main()
{
	Animal* pa = new Animal();
	pa->makeSound();
	delete pa; //delete�� nullptr�� ������ : delete�� �޸𸮸� �����ϰ�, nullptr�� �����͸� null�� ������
	pa = nullptr; // delete�� �ص� �����ʹ� ������ �ּҸ� ����Ű�� �ֱ� ������ nullptr�� ��������

	pa = new Dog();
	pa->makeSound();


	return 0;
}