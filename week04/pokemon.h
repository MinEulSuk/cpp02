#include <iostream>
#include <string>
using namespace std;

//class Pokemon
//{
//public:
//	Pokemon() { cout << "�⺻(���ϸ�) ������" << endl; }
//	virtual ~Pokemon() { cout << "�θ�Ŭ���� (���ϸ�) �Ҹ���" << endl; } //�޸� ���� ����
//	virtual void attack() const { cout << "����" << endl; }
//}; 

class Pokemon
{
public:
	Pokemon();
	virtual ~Pokemon();
	virtual void attack() const;
};