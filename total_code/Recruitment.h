#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Recruitment {
private:
	string companyName;
	string businessNum;
	string task;
	int numPeople;
	string memberID;
	string applyDeadline;
	int applicantsNum = 0;

public:
	Recruitment(string name, string num, string task, int nPeople, string deadline, string ID);
	Recruitment getRecruitment();
	string getCompanyName();
	string getBusinessNum();
	string getTask();
	string getID();
	int getNumPeople();
	string getApplyDeadline();
	void removePerson();
};