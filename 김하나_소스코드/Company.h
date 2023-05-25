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
	Recruitment* ownedRecruitment;

public:
	Company();
	string getBusinessNum();
	string getCompanyName(string businessNum, Company** companies, int companiesCount);
	void addRecruitment(Recruitment* company);
	int getRecruitmentsNum();
};