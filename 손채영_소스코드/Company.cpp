#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

string Company::getCompanyName() {
	return this->companyName;
}

int Company::getCompanyNum() {
	return this->companyNum;
}

Company Company::getCompany(string companyName) {
	return Company(companyName, this->companyNum, this->getId(), this->getPassword());
}

RecruitmentCollection Company::listRecruitments() {
	return this->recruitmentCollection;
}