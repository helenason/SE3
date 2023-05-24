#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Company.h"
#include "Member.h"

using namespace std;

class Recruitment;

/*
	클래스 이름 :
	기능	  :
*/
class Company :public Member
{
private:
	unordered_map<string, int> applicantsNumByTask;
	Recruitment* recruitment;
	string businessNum;
public:
	Company();
	string getBusinessNum();
	Recruitment* getRecruitment();
	void subtractApplicantsNumByTask(string task);
	virtual unordered_map<string, int> getStatistics();
};