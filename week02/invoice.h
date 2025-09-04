#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"

class Invoice
{
    // Product�� ��� �ʵ�� ������ ���� ����
private:
    int invoiceNumber;
    double invoiceTotal;
    Company company;
public:

    //dependency
    //composition
    //aggregation
    
    
    //Invoice(int invoiceNumbe); //�����ڿ� ��ü�� ����
    Invoice(int invoiceNumber,string name,string telephone);//composition
    ~Invoice();
    void add(int quantity, Product product); //use-a �Ϲ��Լ����� ���
    void print() const;
    //void print(Company company) const;

};
//#ifndef INVOICE_H
//#define INVOICE_H
//#include "product.h"
//#include "company.h"
//
//class Invoice
//{
//    // Product�� ��� �ʵ�� ������ ���� ����
//private:
//    int invoiceNumber;
//    double invoiceTotal;
//    Company company; // has-a aggregation
//public:
//    //Invoice(int invoiceNumbe); //�����ڿ� ��ü�� ����
//    Invoice(int invoiceNumber,Company company); // aggregation o 
//    ~Invoice();
//    void add(int quantity, Product product); //use-a �Ϲ��Լ����� ���
//    void print() const;
//    //void print(Company company) const;
//    
//};
#endif