/**************************************************************
 * typeid �����ڷ� Ŭ���� �̸��� Ȯ���ϴ� ���α׷�            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() {
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
	Animal* pa = new Dog(); //�ڽ�Ŭ������ ��ü�� �θ�Ŭ���� �����ͷ� ���� , ��ĳ����
	pa->makeSound(); // �����Լ��� �ƴϹǷ� �θ�Ŭ������ ����Լ� ȣ��
	cout << pa << endl;
	Cat* pc = (Cat*)pa;//������ �ൿ
	pc->makeSound(); // ����̰� ��µǾ�� �ϴµ� ���� ����ȯ���� ���� �߸��� ��� ��� 
	cout << pc << endl;
	delete pc;
	pc = nullptr;



	//Dog* pd = (Dog*)pa; //�θ�Ŭ���� �����͸� �ڽ�Ŭ���� �����ͷ� ����ȯ , �ٿ�ĳ���� (old,C��Ÿ��)
	//Dog* pd = dynamic_cast<Dog*>(pa); //�ٿ�ĳ���� (modern, C++��Ÿ��)
	//pd->makeSound(); // �ڽ�Ŭ������ ����Լ� ȣ��
	//delete pd;
	//pd = nullptr;

	return 0;

	//git reset --hard HEAD~������Ŀ�԰���
}