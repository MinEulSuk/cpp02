#include "invoice.h"
#include "company.h"

int main()
{
	//Company company1("���ɾ�","123 - 456 - 7890");
	// Product ��ü �ν��Ͻ�ȭ
	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);
	// Invoice ��ü�� �ν��Ͻ�ȭ�ϰ� Product ��ü�� ����� ���
	Invoice invoice(1001, "���ɾ�", "123-456-7890"); //composition
	invoice.add(1, product1); //use-a
	invoice.add(6, product2); //use-a
	invoice.print();
	return 0;
}