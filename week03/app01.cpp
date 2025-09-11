/********************************************************************
 * �������� 2���� ��Ḧ Ȱ���� �ҿ����� �������� ���캸�� ���α׷� *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// ���̽� Ŭ������ ����
class Pokemon
{
public:
	virtual void attack() const { cout << "����" << endl; }
};
// �Ļ� Ŭ������ ����
class Pikachu : public Pokemon // ��� is-a ����
{
public:
	void attack() const override { cout << "���� ����" << endl; }
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