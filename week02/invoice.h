#include "product.h"

class Invoice
{
    // Product를 멤버 필드로 가지고 있지 않음
private:
    int invoiceNumber;
    double invoiceTotal;
public:
    Invoice(int invoiceNumber, string name, string telephone);//composition
    ~Invoice();
    void add(int quantity, Product product); //use-a 일반함수에서 사용
    void print() const;

};