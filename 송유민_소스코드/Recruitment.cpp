#pragma once
#include <string>
#include "Recruitment.h"

/*
	�Լ� �̸� : Recruitment::Recruitment()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : Recruitment::getCompanyName()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getCompanyName()
{
	return companyName;
}

/*
	�Լ� �̸� : Recruitment::getTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Recruitment::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getBusinessNum()
{
	return businessNum;
}

/*
	�Լ� �̸� : Recruitment::getApplyDeadline()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getApplyDeadline()
{
	return applyDeadline;
}

/*
	�Լ� �̸� : Recruitment::getgetNumPeople()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
int Recruitment::getNumPeople()
{
	return numPeople;
}

/*
	�Լ� �̸� : Recruitment::removePerson()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Recruitment::removePerson()
{
	if (applicantsNum > 0) {
		applicantsNum -= 1;
		cout << "���� �ο� 1 ���� �� applicantsNum: " << applicantsNum;
	}
}