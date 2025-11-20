#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
T bigger(T first, T second)
{
	if (first > second)
		return first;
	else
		return second;
}

int main()
{
	int i1 = 11;
	double d1 = 76.97;
	cout << bigger<double>(i1, d1) << endl;
	cout << bigger(55.7, 11.9) << endl;
	cout << bigger("hello", "hi") << endl; //메모리 주소 기준으로 출력
	cout << bigger<string>("hello", "hi") << endl; // he hi까지 비교해서 i가 더 크니 hi 출력
	cout << bigger<string>("hxllo", "hi") << endl; // hx hi까지 비교해서 x가 더 크니 hxllo 출력
	cout << bigger<string>("Hxllo", "hi") << endl; // H가 h 보다 작으니 hi 출력
	cout << bigger<string>("hxllo", "hxlloooo") << endl; //
	return 0;
}