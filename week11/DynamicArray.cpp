#include <iostream>
#include "DynamicArray.h"

using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) // 매개변수 생성자 를 통해 size를 힙메모리에 할당
{
	cout << "동적배열 생성됨\n";
	ptr = new int(size);
}

DynamicArray::~DynamicArray()
{
	cout <<"동적배열 소멸됨\n";
	delete ptr; //생성자에서 할당한 메모리는 소멸자에서 delete
}

int DynamicArray::GetAt(int index)
{
	return ptr[index];
}

void DynamicArray::SetAt(int index, int value)
{
	ptr[index] = value;
}
