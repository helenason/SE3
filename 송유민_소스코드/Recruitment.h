#pragma once
#include <iostream>
#include <string>


using namespace std;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Recruitment
{
private:
	string companyName;
	string task;
	int numPeople;
	string applyDeadline;
	string businessNum;
	int applicantsNum = 0;
public:
	Recruitment();
	string getCompanyName();
	string getTask();
	int getNumPeople();
	string getBusinessNum();
	string getApplyDeadline();
	void removePerson();
};