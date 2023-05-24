#pragma once
#include <string>
#include "Company.h"
#include "Recruitment.h"

/*
	�Լ� �̸� : Company::Company()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Company::Company()
{
	this->recruitment = new Recruitment();
	this->businessNum = "12345";
}

/*
	�Լ� �̸� : Company::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Company::getBusinessNum()
{
	return businessNum;
}

/*
	�Լ� �̸� : Company::getRecruitments()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Recruitment* Company::getRecruitment()
{
	return recruitment;
}

/*
	�Լ� �̸� : Company::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
unordered_map<string, int> Company::getStatistics()
{
	return applicantsNumByTask;
}

/*
	�Լ� �̸� : Company::subtractApplicantsNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::subtractApplicantsNumByTask(string task)
{
	if (applicantsNumByTask[task] > 0)
	{
		applicantsNumByTask[task] -= 1;
	}
}