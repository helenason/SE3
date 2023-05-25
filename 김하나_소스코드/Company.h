#pragma once
#include <iostream>
#include "Member.h"
#include "Recruitment.h"

using namespace std;

class Company : public Member {
private:
	string id;
	string password;
	int numRecruitments;
	string companyName;
	string businessNum;
	Recruitment* ownedRecruitment;

public:
	Company(int numRecruitments, string companyName, string businessNum, string id, string password);
	string getBusinessNum();
	virtual string getCompanyName();
	int getRecruitmentsNum();
	virtual Recruitment* getRecruitment();
	virtual void addRecruitment(Recruitment* newRecruitment);
};
