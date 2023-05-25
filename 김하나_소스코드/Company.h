#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;

class Company {
private:
	int numRecruitments;
	string companyName;
	string businessNum;

public:
	Company();
	string getBusinessNum();
	string getCompanyName(string businessNum, Company** companies, int companiesCount);
	void addRecruitment(Company* company);
	int getRecruitmentsNum();
};