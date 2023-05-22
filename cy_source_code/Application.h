#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

class Application {
private :
	string companyName;
	int companyNum;
	string task;
	int numPeople;
	string applyDeadline;
	int applyMonth;
public :
	Application(string name, int num, string task, int nPeople, string deadline) {
		this->companyName = name;
		this->companyNum = num;
		this->task = task;
		this->numPeople = nPeople;
		this->applyDeadline = deadline;
	}
	//Application getApplication();
	string getCompanyName();
	int getCompanyNum();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
};