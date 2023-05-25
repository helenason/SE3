#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
	클래스 이름 : Application
	기능	  : 지원 정보 하나를 의미한다.
			   회사 이름, 사업자 번호, 업무, 제한 인원 수, 마감 기한, 지원한 월을
			   포함한다.
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