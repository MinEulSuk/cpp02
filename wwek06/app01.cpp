#include <iostream>
using namespace std;


class Complex {
private :
	int real;
	int imag;                             
public:
	Complex(int real = 0, int imag = 0) : real(real), imag(imag) {}//초기화리스트
	~Complex() {}
	void setReal(int real) {//생성자가 아니라서 this->를 써야함 초기화리스트 x
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImag(int imag) {
		this->imag = imag;
	}
	int getImag()const {
		return imag;
	}
	Complex operator+(const Complex& right) {//연산자 오버로딩 operator+
		int r = this->real + right.real;
		int i = this->imag + right.imag;
		return Complex(r,i);
	}
	Complex operator++(int) { // 후위 연산 코드
		//(int) 자료타입을 넣음 
		Complex previous(this->real, this->imag);//백업
		this->real = this->real + 1;
		return previous;
	}

	Complex operator++() { //전위 연산 코드
		this->real++;
		return Complex(this->real, this->imag);
	}
};

int main() {
	Complex c1;
	Complex c2(10, 7);
	c1.setReal(10);
	c1.setImag(20);
	
	//cout << c1.getReal() << "+" << c1.getImag() << "i" << endl;
	//cout << c2.getReal() << "+" << c2.getImag() << "i" << endl;


	Complex c3 = c1 + c2; //c1.operator+(c2); 같은의미
	
	//cout << c3.getReal() << "+" << c3.getImag() << "i" << endl;
	
	Complex c4 = c3++; //c3.operator++(0);
	//Complex c4 = c3.operator++(); //0을 안넣으면 전위연산
	Complex c5 = ++c3;
	cout << "c3 : " << c3.getReal() << "+" << c3.getImag() << "i" << endl;
	cout << "c4 : " << c4.getReal() << "+" << c4.getImag() << "i" << endl;
	cout << "c5 : " << c5.getReal() << "+" << c5.getImag() << "i" << endl;
	return 0;


}