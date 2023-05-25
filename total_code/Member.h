#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Application.h"

using namespace std;
class Recruitment;

class Member {
private:
	string id;
	string password;
	bool isActivated = false;
	bool isClassifiedAsCompany;

public:
	Member(string id, string password);
	string getId();
	string getPassword();
	virtual string getBusinessNum();
	virtual Recruitment* getRecruitment();
	virtual string getCompanyName();
	virtual void addRecruitment(Recruitment* newRecruitment);
	virtual void addNewApplication(Application* application, string task);
};