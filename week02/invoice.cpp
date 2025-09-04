#include "invoice.h"

Invoice::Invoice(int invoiceNumber, string name, string telephone)
	: invoiceNumber(invoiceNumber), invoiceTotal(0.0)
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
void Invoice::print() const {
	cout << "û�� ��ȣ: " << invoiceNumber << endl;
	cout << "û�� �ݾ�: " << invoiceTotal << endl;
}