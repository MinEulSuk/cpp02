/**************************************************************
 * 함수에서 발생한 예외를                                     *
 * try-catch 블록으로 처리하는 프로그램                       *
 **************************************************************/
#include <iostream>
#include "DynamicArray.h"
using namespace std;


int main()
{
    DynamicArray da1(5);

	da1.SetAt(0,100);
    da1.SetAt(4, -11);
    return 0;
}