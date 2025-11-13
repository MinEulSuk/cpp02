/**************************************************************
 * 함수에서 발생한 예외를                                     *
 * try-catch 블록으로 처리하는 프로그램                       *
 **************************************************************/
#include <iostream>
#include "DynamicArray.h"
using namespace std;


int main()
{
    
	try {
		DynamicArray da1(5);
		da1.SetAt(0, 100);
		da1.SetAt(4, -11);
		//da1.SetAt(10, 9);//메모리 범위는 5인데 10번째 인덱스에 접근
		//da1.SetAt(-3, 1); // 예외


		cout << da1.GetAt(0) << endl;
		cout << da1.GetAt(4) << endl;
		cout < endl;
		cout << da1.GetAt(7) << endl;//메모리 범위는 5인데 7번째 인덱스에 접근
	}
	catch (int ex) {
		cout << "인덱스 범위를 벗어났습니다.\n";
	}
	catch (bool err) {
		cout << "인덱스 범위를 벗어났습니다. bool\n";
	}
	catch (const char* err) {
		cout << "메모리 오류\n";
		cout << "에러코드 : " <<err;
	}
	catch (...) {
		cout << "런타임 오류 발생\n";
	}



    return 0;
}