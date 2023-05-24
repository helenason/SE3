#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

Company::Company(string companyName, string businessNum, string id, string password) :Member(id, password) {
	this->id = id;
	this->password = password;
	this->companyName = companyName;
	this->businessNum = businessNum;
}
string Company::getCompanyName() {
	return this->companyName;
}

string Company::getBusinessNum() {
	return this->businessNum;
}

Company Company::getCompany(string companyName) {
	return Company(companyName, this->businessNum, this->id, this->password);
}

Recruitment* Company::getRecruitment() {
	return this->ownedRecruitment;
}