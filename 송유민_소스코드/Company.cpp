#pragma once
#include <string>
#include "Company.h"
#include "Recruitment.h"

/*
	함수 이름 : Company::Company()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Company::Company()
{
	this->recruitment = new Recruitment();
	this->businessNum = "12345";
}

/*
	함수 이름 : Company::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Company::getBusinessNum()
{
	return businessNum;
}

/*
	함수 이름 : Company::getRecruitments()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Recruitment* Company::getRecruitment()
{
	return recruitment;
}

/*
	함수 이름 : Company::getStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
unordered_map<string, int> Company::getStatistics()
{
	return applicantsNumByTask;
}

/*
	함수 이름 : Company::subtractApplicantsNumByTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Company::subtractApplicantsNumByTask(string task)
{
	if (applicantsNumByTask[task] > 0)
	{
		applicantsNumByTask[task] -= 1;
	}
}