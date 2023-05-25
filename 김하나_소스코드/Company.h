#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Member.h"

using namespace std;

class Company : public Member {
private:
	int numRecruitments;
	string companyName;
	string businessNum;
	Recruitment* ownedRecruitment;

public:
	Company(int numRecruitments, string companyName, string businessNum, Recruitment* ownedRecruitment);
	virtual Recruitment* getRecruitment();
	string getBusinessNum();
	string getCompanyName(string businessNum, Company** companies, int companiesCount);
	void addRecruitment(Recruitment* company);
	int getRecruitmentsNum();
};