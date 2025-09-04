#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"

class Invoice
{
    // Product를 멤버 필드로 가지고 있지 않음
private:
    int invoiceNumber;
    double invoiceTotal;
    Company company;
public:

    //dependency
    //composition
    //aggregation
    
    
    //Invoice(int invoiceNumbe); //생성자에 객체가 없음
    Invoice(int invoiceNumber,string name,string telephone);//composition
    ~Invoice();
    void add(int quantity, Product product); //use-a 일반함수에서 사용
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
//    // Product를 멤버 필드로 가지고 있지 않음
//private:
//    int invoiceNumber;
//    double invoiceTotal;
//    Company company; // has-a aggregation
//public:
//    //Invoice(int invoiceNumbe); //생성자에 객체가 없음
//    Invoice(int invoiceNumber,Company company); // aggregation o 
//    ~Invoice();
//    void add(int quantity, Product product); //use-a 일반함수에서 사용
//    void print() const;
//    //void print(Company company) const;
//    
//};
#endif