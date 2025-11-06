#pragma once
class DynamicArray {
private:
	int* ptr;
	int size;
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();

	int GetAt(int index);
	void SetAt(int index, int value);

};