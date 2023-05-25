#pragma once
#include <iostream>
#include <unordered_map>
#include "Recruitment.h"
#include "Member.h"

using namespace std;

/*
	클래스 이름: Company
	기능: 회사 회원을 의미한다.
*/
class Company : public Member {
private:
	string id;
	string password;
	string companyName;
	string businessNum;
	Recruitment* ownedRecruitment;
	unordered_map<string, int> applicantsNumByTask;
public:
	Company(int memClassifier, string id, string password, string companyName, string businessNum);
	virtual string getBusinessNum();
	virtual string getCompanyName();
	virtual Recruitment* getRecruitment();
	virtual void addRecruitment(Recruitment* newRecruitment);
	void updateApplicants(string task);
	void subtractApplicantsNumByTask(string task);
	virtual unordered_map<string, int> getStatistics();
};
