#include "invoice.h"
#include "company.h"

int main()
{
	//Company company1("이케아","123 - 456 - 7890");
	// Product 객체 인스턴스화
	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);
	// Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
	Invoice invoice(1001, "이케아", "123-456-7890"); //composition
	invoice.add(1, product1); //use-a
	invoice.add(6, product2); //use-a
	invoice.print();
	return 0;
}