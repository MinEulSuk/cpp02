/********************************************************************
 * �������� 2���� ��Ḧ Ȱ���� �ҿ����� �������� ���캸�� ���α׷� *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
public:
	Pokemon() { cout << "�⺻(���ϸ�) ������" << endl; }
	virtual ~Pokemon() { cout << "�θ�Ŭ���� (���ϸ�) �Ҹ���" << endl; }
	virtual void attack() const { cout << "����" << endl; }
};
// �Ļ� Ŭ������ ����
class Pikachu : public Pokemon // ��� is-a ����
{
public:
	Pikachu() { cout << "�⺻(��ī��) ������" << endl; }
	~Pikachu() { cout << "�ڽ�Ŭ���� (��ī��) �Ҹ���"<<endl; }
	void attack() const { cout << "���� ����" << endl; }
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