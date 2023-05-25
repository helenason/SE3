#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "CancelApplicationUI.h"
#include "Company.h"
#include "Member.h"
#include "CancelApplication.h"

/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  : ��Ʈ�� Ŭ������ cancelApplication�� ȣ���� ���� ����Ϸ��� ä���� ���� ȸ�縦 ��ȯ�Ѵ�.
			   ��ȯ���� ȸ�翡�� ȸ�� �̸��� ������ ������ �Է¹��� ����� ��ȣ�� �Բ� ���Ͽ� ����Ѵ�.
	���� ���� : FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount
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
	���	  : �����ڷ� CancelApplication Ÿ�� ��ü�� �����ڿ� �ڽ��� ���ڷ� ������
			   ������� cancelApplication�� �Ҵ��Ѵ�.
	���� ���� : CancelApplication* cancelApplication
	��ȯ��    : ����
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}
