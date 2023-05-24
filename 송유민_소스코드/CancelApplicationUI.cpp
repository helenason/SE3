#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "CancelApplicationUI.h"
#include "Member.h"
#include "Company.h"
#include "Recruitment.h"

class Company;

/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::selectApplication(FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount)
{
	char businessNumChar[32];

	fscanf(inputFile, "%s", businessNumChar);

	string businessNum(businessNumChar);

	Company* company = this->cancelApplication->cancelApplication(loginMember, companies, companiesCount, businessNum);

	string companyName = company->getRecruitment()->getCompanyName();
	string task = company->getRecruitment()->getTask();

	const char* companyNameChar = companyName.c_str();
	const char* taskChar = task.c_str();

	fprintf(outputFile, "4.4 ���� ���\n");
	fprintf(outputFile, "> %s %s %s\n\n", companyNameChar, businessNumChar, taskChar);
}

/*
	�Լ� �̸� : CancelApplicationUI::CancelApplicationUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}
