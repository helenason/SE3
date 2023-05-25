#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include "CancelApplicationUI.h"
#include "Company.h"
#include "Member.h"

/*
	함수 이름 : CancelApplication::CancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	함수 이름 : CancelApplication::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Company* CancelApplication::cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum)
{
	string task;
	Company* company = 0;

	for (int i = 0; i < companiesCount; i++)
	{
		if (companies[i]->getBusinessNum() == businessNum)
		{
			companies[i]->getRecruitment()->removePerson();

			task = companies[i]->getRecruitment()->getTask();

			companies[i]->subtractApplicantsNumByTask(task);
			company = companies[i];

			break;
		}
	}

	member->cancelApplication(businessNum, task);

	return company;
}

/*
	함수 이름 : CancelApplication::getCancelApplicationUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}