#pragma once
// 클래스를 설계해서 컴파일 오류에 대응함
//컴파일 에러 시 코드 , 설명 , 줄(대신 주소)
#include "DynamicArray.h"


class MyException{
private:
	int errorCode;
	const char* errorMessage;
	DynamicArray* errorAddress;
public:
	MyException(int ec, const char* em,DynamicArray* ea);
	int getErrorCode() const;
	const char* getErrorMessage() const;
	DynamicArray* getErrorAddress() const;
};




