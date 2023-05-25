#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;
class Recruitment;

class Member {
private:
	string id;
	string password;
	string businessNum;
	bool isActivated = false;
	bool isClassifiedAsCompany;

public:
	Member(string id, string password);
	string getId();
	string getPassword();
	string getBusinessNum();
	virtual Recruitment* getRecruitment();
	virtual string getCompanyName();
	virtual void addRecruitment(Recruitment* newRecruitment);
};