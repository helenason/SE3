#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Application
{
private:
	string companyName;
	string task;
	int numPeople;
	string applyDeadline;
	string businessNum;
public:
	Application();
	string getCompanyName();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
	string getBusinessNum();
};