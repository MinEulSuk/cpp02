#include "product.h"

class Invoice
{
    // Product�� ��� �ʵ�� ������ ���� ����
private:
    int invoiceNumber;
    double invoiceTotal;
public:
    Invoice(int invoiceNumber, string name, string telephone);//composition
    ~Invoice();
    void add(int quantity, Product product); //use-a �Ϲ��Լ����� ���
    void print() const;

};