#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include "Company.h"
#include "Recruitment.h"

/*
	�Լ� �̸� : CancelApplication::CancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	�Լ� �̸� : CancelApplication::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Company* CancelApplication::cancelApplication(Member* member, Company** companies,int companiesCount, string businessNum)
{
	string task;
	Company* company = 0;

	for (int i = 0; i < companiesCount; i++)
	{
		cout << businessNum << endl;
		cout << "companies[i]->getBusinessNum(): "<<companies[i]->getBusinessNum() << " and " <<"businessNum: "<< businessNum;
		if (companies[i]->getBusinessNum()==businessNum)
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
	�Լ� �̸� : CancelApplication::getCancelApplicationUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}