#pragma once
#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

class CompanyCollection {
private :
	Company* ownedCompany[100];
public :
	Company findFirst();
	Company getNext();
	void addCompany();
	void removeCompany();
	Company* findCompany(string companyName);
};