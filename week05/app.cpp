/**************************************************************
 * typeid �����ڷ� Ŭ���� �̸��� Ȯ���ϴ� ���α׷�            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0 { //���� ���� �Լ�
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
	Animal animal;//����	 ���� �Լ��� ��ü ���� �Ұ�
	animal.makeSound();




	return 0;
}