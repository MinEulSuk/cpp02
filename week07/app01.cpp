#include<iostream>

using namespace std;

class Person {
public :
	string name;
	virtual void warn() {};
};

class UndergraduateStudent {
public : 
	double gpa;
	void warn() { cout << "�л���\n"; };
};
class DormitoryStudent{
public :
	int roomNumber;
	void warn() { cout << "�����ο�\n"; };
};
class UndergraduateDormitoryStudent
	:public UndergraduateStudent, public DormitoryStudent{
};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn(); // ���߻�� �� ��� �θ��� warn�Լ��� ȣ���� �� ��ȣ��
	uds.DormitoryStudent::warn();
	uds.gpa = 3.9;
	uds.roomNumber = 201;
	//uds.name = "���Ǽ�"; // ���� �߻� ������ ���̾Ƹ�� ����
	return 0;
}
