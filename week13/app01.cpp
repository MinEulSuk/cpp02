#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
void exchange(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	// int 자료형 스왑
	int integer1 = 5;
	int integer2 = 70;
	swap(integer1, integer2);
	cout << "swap(5, 70) = ";
	cout << integer1 << "  " << integer2 << endl;
	// double 자료형 스왑
	double d1 = 101.5;
	double d2 = 402.7;
	swap(d1, d2);
	cout << "swap(101.5, 402.7) = ";
	cout << d1 << "  " << d2 << endl;
	return 0;
}