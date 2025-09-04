#include "invoice.h"

// ������
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
// add ��� �Լ�
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const { // �̰� const�� company�� const�� �ؾ� ������

	company.print();
	cout << "û�� ��ȣ: " << invoiceNumber << endl;
	cout << "û�� �ݾ�: " << invoiceTotal << endl;
}
//#include "invoice.h"
//
//// ������
//Invoice::Invoice(int invoiceNumber)
//	: invoiceNumber(invoiceNumber), invoiceTotal(0.0)
//{
//}
//Invoice::~Invoice()
//{
//}
//// add ��� �Լ�
//void Invoice::add(int quantity, Product product)
//{
//	invoiceTotal += quantity * product.getPrice();
//}
//void Invoice::print() const{ // �̰� const�� company�� const�� �ؾ� ������
//
//	company.print();
//	cout << "û�� ��ȣ: " << invoiceNumber << endl;
//	cout << "û�� �ݾ�: " << invoiceTotal << endl;
//}
// print ��� �Լ�
//void Invoice::print() const{
//
//	company.print();
//	cout << "û�� ��ȣ: " << invoiceNumber << endl;
//	cout << "û�� �ݾ�: " << invoiceTotal << endl;
//}