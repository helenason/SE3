#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

class Application {
private :
	string companyName;
	string businessNum;
	string task;
	int numPeople;
	string applyDeadline;
	int applyMonth;
public :
	Application(string name, string num, string task, int nPeople, string deadline) {
		this->companyName = name;
		this->businessNum = num;
		this->task = task;
		this->numPeople = nPeople;
		this->applyDeadline = deadline;
	}
	//Application getApplication();
	string getCompanyName();
	string getBusinessNum();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
};