#include <iostream>
#include <string>
#include "pokemon.h"
using namespace std;

// �Ļ� Ŭ������ ����
class Pikachu : public Pokemon // ��� is-a ����
{
public:
	Pikachu();
	~Pikachu();
	void attack() const;
};

//// �Ļ� Ŭ������ ����
//class Pikachu : public Pokemon // ��� is-a ����
//{
//public:
//	Pikachu() { cout << "�⺻(��ī��) ������" << endl; }
//	~Pikachu() { cout << "�ڽ�Ŭ���� (��ī��) �Ҹ���" << endl; }
//	void attack() const { cout << "���� ����" << endl; }
//};