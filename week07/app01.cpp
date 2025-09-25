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
	void warn() { cout << "학사경고\n"; };
};
class DormitoryStudent{
public :
	int roomNumber;
	void warn() { cout << "벌점부여\n"; };
};
class UndergraduateDormitoryStudent
	:public UndergraduateStudent, public DormitoryStudent{
};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn(); // 다중상속 시 어느 부모의 warn함수를 호출할 지 모호함
	uds.DormitoryStudent::warn();
	uds.gpa = 3.9;
	uds.roomNumber = 201;
	//uds.name = "민의석"; // 에러 발생 죽음의 다이아몬드 문제
	return 0;
}
