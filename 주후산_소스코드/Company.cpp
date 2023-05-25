#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

Company::Company(int memClassifier, string companyName, string businessNum, string id, string password):Member(memClassifier, id, password) {
	/*this->id = id;
	this->password = password;*/

	this->companyName = companyName;
	this->businessNum = businessNum;
}

string Company::getCompanyName() {
	return this->companyName;
}

string Company::getBusinessNum() {
	return this->businessNum;
}
