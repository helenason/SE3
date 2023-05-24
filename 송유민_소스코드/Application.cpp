#pragma once
#include <string>
#include "Application.h"

/*
	함수 이름 : Application::Application()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Application::Application()
{
	this->companyName = "companyName";
	this->task = "task";
	this->numPeople = 10;
	this->applyDeadline = "applyDeadline";
	this->businessNum = "12345";
}

/*
	함수 이름 : Application::getCompanyName()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getCompanyName()
{
	return companyName;
}

/*
	함수 이름 : Application::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getTask()
{
	return task;
}

/*
	함수 이름 : Application::getNumPeople()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
int Application::getNumPeople()
{
	return numPeople;
}

/*
	함수 이름 : Application::getApplyDeadline()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getApplyDeadline()
{
	return applyDeadline;
}

/*
	함수 이름 : Application::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getBusinessNum()
{
	return businessNum;
}