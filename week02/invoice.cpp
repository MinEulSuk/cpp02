#include "invoice.h"

// 생성자
//Invoice::Invoice(int invoiceNumber,Company company) // aggregation
//	: invoiceNumber(invoiceNumber), invoiceTotal(0.0),company(company)
//{
//}
Invoice::Invoice(int invoiceNumber,string name, string telephone)
	: invoiceNumber(invoiceNumber), invoiceTotal(0.0),company(name,telephone)
{
}
Invoice::~Invoice()
{
}
// add 멤버 함수
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const { // 이게 const라 company도 const로 해야 동작함

	company.print();
	cout << "청구 번호: " << invoiceNumber << endl;
	cout << "청구 금액: " << invoiceTotal << endl;
}
//#include "invoice.h"
//
//// 생성자
//Invoice::Invoice(int invoiceNumber)
//	: invoiceNumber(invoiceNumber), invoiceTotal(0.0)
//{
//}
//Invoice::~Invoice()
//{
//}
//// add 멤버 함수
//void Invoice::add(int quantity, Product product)
//{
//	invoiceTotal += quantity * product.getPrice();
//}
//void Invoice::print() const{ // 이게 const라 company도 const로 해야 동작함
//
//	company.print();
//	cout << "청구 번호: " << invoiceNumber << endl;
//	cout << "청구 금액: " << invoiceTotal << endl;
//}
// print 멤버 함수
//void Invoice::print() const{
//
//	company.print();
//	cout << "청구 번호: " << invoiceNumber << endl;
//	cout << "청구 금액: " << invoiceTotal << endl;
//}