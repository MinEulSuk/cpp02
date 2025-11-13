#include <iostream>
#include "DynamicArray.h"

using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size):size(size) // 매개변수 생성자 를 통해 size를 힙메모리에 할당
{
	try{
		//this->size = size;
		ptr = new int[size];
		cout << "동적배열 생성됨\n";
		throw "메모리 오류"; //강제 예외 발생
	}
	catch (...) {
		
		delete[] ptr; //더블 프리 문제 발생 (두번 delete)
		cout << "힙 메모리 해제 (생성자 내부)\n";
		throw "메모리 오류";
	}
}

DynamicArray::~DynamicArray()
{
	cout <<"동적배열 소멸됨\n";
	delete[] ptr; //생성자에서 할당한 메모리는 소멸자에서 delete
}

int DynamicArray::GetAt(int index)
{
	if (index >= size || index < 0)
		throw true;
	return ptr[index];
}

void DynamicArray::SetAt(int index, int value)
{
	if (index >= size || index < 0)
		throw false;//리터럴 (쓰면 바로 사라짐)
	ptr[index] = value;
}
