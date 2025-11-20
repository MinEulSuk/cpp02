#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
	cout << "Generic display : " << value << '\n';
}

template <>
void display<char>(char value) {
	cout << "Specialized display for char : " << value << endl;
}

template <> // 문자열 리터럴
void display<const char*>(const char* value) {
	cout << "Specialized display for c style string : " << value << endl;
}



int main()
{//generic display로 받지만 char이 있으면 char로 받음

	display(50);
	display('2'); //
	display("2"); //
	display(2.17);

	return 0;
}