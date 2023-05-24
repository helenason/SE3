#pragma once
#include <iostream>
#include <string>


using namespace std;

/*
	클래스 이름 :
	기능	  :
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