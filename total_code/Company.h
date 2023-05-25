#pragma once
#include <iostream>
#include <unordered_map>
#include "Member.h"
#include "Recruitment.h"

using namespace std;

class Company : public Member {
private:
	string id;
	string password;
	string companyName;
	string businessNum;
	Recruitment* ownedRecruitment;
	unordered_map<string, int> applicantsNumByTask;
public:
	Company(string id, string password, string companyName, string businessNum);
	virtual string getBusinessNum();
	virtual string getCompanyName();
	virtual Recruitment* getRecruitment();
	virtual void addRecruitment(Recruitment* newRecruitment);
	void updateApplicants(string task);
};
