#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Application {
private:
	string companyName;
	string businessNum;
	string task;
	int numPeople;
	string applyDeadline;
	int applyMonth;
public:
	Application(string name, string num, string task, int nPeople, string deadline);
	string getCompanyName();
	string getBusinessNum();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
};