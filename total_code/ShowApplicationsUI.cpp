#pragma once
#include<string>
#include"ShowApplicationsUI.h"
#include "Member.h"
#include "ShowApplications.h"

/*
	�Լ� �̸� : ShowApplicationsUI::showAllApplications()
	���	  : ��Ʈ�� Ŭ������ showApplications�� ȣ���� ���� �α��� �� ȸ����
			   ������ �ִ� ���� ���� ����Ʈ�� �����´�.
			   �׸��� �� ����Ʈ�� �̿��� ���� ���� ����(ȸ�� �̸�, ����� ��ȣ, ����, �ο� ��, ���� �Ⱓ)
			   �� ���Ͽ� ����Ѵ�.
	���� ���� : FILE* inputFile, FILE* outputFile, Member* loginMember
	��ȯ��    : ����
*/
void ShowApplicationsUI::showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	fprintf(outputFile, "4.3. ���� ���� ��ȸ\n");
	ApplicationCollection* applicationCollection = this->showApplications->showApplications(loginMember);

	Application** applications = applicationCollection->getApplications();

	for (int i = 0; i < applicationCollection->getCount(); i++)
	{
		string companyName = applications[i]->getCompanyName();
		string businessNum = applications[i]->getBusinessNum();
		string task = applications[i]->getTask();
		int numPeople = applications[i]->getNumPeople();
		string applyDeadline = applications[i]->getApplyDeadline();

		const char* companyNameChar = companyName.c_str();
		const char* businessNumChar = businessNum.c_str();
		const char* taskChar = task.c_str();
		const char* applyDeadlineChar = applyDeadline.c_str();

		fprintf(outputFile, "> %s %s %s %d %s\n", companyNameChar, businessNumChar, taskChar, numPeople, applyDeadlineChar);
	}

	fprintf(outputFile, "\n");
}

/*
	�Լ� �̸� : ShowApplicationsUI::ShowApplicationsUI()
	���	  : �����ڷ� ShowApplicationsUI* Ÿ�� ��ü�� �����ڿ� �ڽ��� ���ڷ� ������
			   ��������� showApplications�� �Ҵ��Ѵ�.
	���� ���� : ShowApplications* showApplications
	��ȯ��    : ����
*/

ShowApplicationsUI::ShowApplicationsUI(ShowApplications* showApplications)
{
	this->showApplications = showApplications;
}