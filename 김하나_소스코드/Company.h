#pragma once
#include <iostream>
#include "Member.h"
#include "Recruitment.h"
#include "Member.h"

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
<<<<<<< HEAD
	Company(int numRecruitments, string companyName, string businessNum, string id, string password);
=======
	Company(int numRecruitments, string companyName, string businessNum, Recruitment* ownedRecruitment);
	virtual Recruitment* getRecruitment();
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5
	string getBusinessNum();
	virtual string getCompanyName();
	int getRecruitmentsNum();
	virtual Recruitment* getRecruitment();
	virtual void addRecruitment(Recruitment* newRecruitment);
};
