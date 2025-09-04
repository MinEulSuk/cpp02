#include "company.h"

Company::Company(string name, string telephone) : name(name),telephone(telephone)
{
}

void Company::print() const
{
	cout << "회사 명 : "<< name << endl;
	cout << "연락처 : " << telephone << endl;
}
