#pragma once
#include <string>
#include "Application.h"

/*
	�Լ� �̸� : Application::Application()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : Application::getCompanyName()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getCompanyName()
{
	return companyName;
}

/*
	�Լ� �̸� : Application::getTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Application::getNumPeople()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
int Application::getNumPeople()
{
	return numPeople;
}

/*
	�Լ� �̸� : Application::getApplyDeadline()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getApplyDeadline()
{
	return applyDeadline;
}

/*
	�Լ� �̸� : Application::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getBusinessNum()
{
	return businessNum;
}