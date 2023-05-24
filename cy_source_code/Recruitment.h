#pragma once

#include <iostream>
#include <string>
using namespace std;

class Recruitment {
private:
	string companyName;
	string businessNum;
	string task;
	int numPeople;
	string applyDeadline;

public:
	Recruitment(string name, string num, string task, int nPeople, string deadline);
	string getCompanyName();
	string getBusinessNum();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
	Recruitment getRecruitment();
	void addPerson();
};