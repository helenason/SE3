#pragma once
#include<string>
#include"ShowApplicationsUI.h"
#include "Member.h"
#include "ShowApplications.h"

/*
	함수 이름 : ShowApplicationsUI::showAllApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowApplicationsUI::showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	fprintf(outputFile, "4.3. 지원 정보 조회\n");
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
	함수 이름 : ShowApplicationsUI::ShowApplicationsUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/

ShowApplicationsUI::ShowApplicationsUI(ShowApplications* showApplications)
{
	this->showApplications = showApplications;
}