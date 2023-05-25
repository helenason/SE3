#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include "CancelApplicationUI.h"
#include "Company.h"
#include "Member.h"

/*
	�Լ� �̸� : CancelApplication::CancelApplication()
	���	  : �����ڷ� CancelApplicationUI Ÿ�� ��ü�� �����ڿ� �ڽ��� ���ڷ� ������
			   ������� cancelApplicationUI�� �Ҵ��Ѵ�.
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	�Լ� �̸� : CancelApplication::cancelApplication()
	���	  : �������� ���� ��� �κ��̴�.
			   ��ü ȸ��� �� �Է¹��� ����� ��ȣ�� ���� ȸ�縦 �����ϰ�
			   �� ȸ���� ä�뿡�� �ο� ���� �ϳ� ���̴� Recruitment�� ��� �Լ� removePerson�� ȣ���ϰ�
			   ä�� ������ ������ �����´�. �׸��� �� ������ ���ڷ� ������ ���� ���� ��迡�� �ش� ������
			   ������ ���� �ϳ� ���δ�.
	���� ���� : Member* member, Company** companies, int companiesCount, string businessNum
	��ȯ��    : Company*
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
	�Լ� �̸� : CancelApplication::getCancelApplicationUI()
	���	  : ��������� �ٿ���� Ŭ���� cancelApplicationUI�� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��    : CancelApplicationUI* �ٿ���� Ŭ������ ��ȯ�Ѵ�.
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}