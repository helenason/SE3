#pragma once
#include <string>
#include "Recruitment.h"

/*
	함수 이름 : Recruitment::Recruitment()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Recruitment::Recruitment()
{
	this->companyName = "companyName";
	this->task = "task";
	this->numPeople = 10;
	this->applyDeadline = "applyDeadline";
	this->businessNum = "12345";
}

/*
	함수 이름 : Recruitment::getCompanyName()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getCompanyName()
{
	return companyName;
}

/*
	함수 이름 : Recruitment::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getTask()
{
	return task;
}

/*
	함수 이름 : Recruitment::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getBusinessNum()
{
	return businessNum;
}

/*
	함수 이름 : Recruitment::getApplyDeadline()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getApplyDeadline()
{
	return applyDeadline;
}

/*
	함수 이름 : Recruitment::getgetNumPeople()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
int Recruitment::getNumPeople()
{
	return numPeople;
}

/*
	함수 이름 : Recruitment::removePerson()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Recruitment::removePerson()
{
	if (applicantsNum > 0) {
		applicantsNum -= 1;
		cout << "지원 인원 1 감소 후 applicantsNum: " << applicantsNum;
	}
}