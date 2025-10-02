#include <iostream>
using namespace std;


class Complex {
private :
	int real;
	int imag;                             
public:
	Complex(int real = 0, int imag = 0) : real(real), imag(imag) {}//�ʱ�ȭ����Ʈ
	~Complex() {}
	void setReal(int real) {//�����ڰ� �ƴ϶� this->�� ����� �ʱ�ȭ����Ʈ x
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
	Complex operator+(const Complex& right) {//������ �����ε� operator+
		int r = this->real + right.real;
		int i = this->imag + right.imag;
		return Complex(r,i);
	}
	Complex operator++(int) { // ���� ���� �ڵ�
		//(int) �ڷ�Ÿ���� ���� 
		Complex previous(this->real, this->imag);//���
		this->real = this->real + 1;
		return previous;
	}

	Complex operator++() { //���� ���� �ڵ�
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


	Complex c3 = c1 + c2; //c1.operator+(c2); �����ǹ�
	
	//cout << c3.getReal() << "+" << c3.getImag() << "i" << endl;
	
	Complex c4 = c3++; //c3.operator++(0);
	//Complex c4 = c3.operator++(); //0�� �ȳ����� ��������
	Complex c5 = ++c3;
	cout << "c3 : " << c3.getReal() << "+" << c3.getImag() << "i" << endl;
	cout << "c4 : " << c4.getReal() << "+" << c4.getImag() << "i" << endl;
	cout << "c5 : " << c5.getReal() << "+" << c5.getImag() << "i" << endl;
	return 0;


}