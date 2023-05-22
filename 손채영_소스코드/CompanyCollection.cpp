#include <iostream>
#include <string>
#include "CompanyCollection.h"
using namespace std;

Company CompanyCollection::findFirst() {

}
Company CompanyCollection::getNext() {

}
void CompanyCollection::addCompany() {

}
void CompanyCollection::removeCompany() {

}
Company* CompanyCollection::findCompany(string companyName) {

	for (int i = 0; i < sizeof(ownedCompany)/sizeof(*ownedCompany); i++) {
		Company* com = this->ownedCompany[i];
		string comName = com->getCompanyName();

		if (comName == companyName) {
			return com;			
		}

	}
}