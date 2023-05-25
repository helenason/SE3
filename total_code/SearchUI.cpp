#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "SearchUI.h"
#include "Company.h"
#include "Search.h"

/*
	�Լ� �̸� : SearchUI::enterTerms()
	���	  : �Է� �� ���
	���� ���� : FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount
	��ȯ��    : ����
*/

void SearchUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount) {

	char companyName[32];
	fscanf(in_fp, "%s", companyName);

	Search* search = this->search;
	Recruitment* searchedRecruitment;

	searchedRecruitment = search->searchRecruitmentByCompanyName(companyName, companies, companiesCount);

	int nPeople = searchedRecruitment->getNumPeople();
	string businessNum = searchedRecruitment->getBusinessNum();
	string task = searchedRecruitment->getTask();
	string deadline = searchedRecruitment->getApplyDeadline();

	const char* businessNumChar = businessNum.c_str();
	const char* taskChar = task.c_str();
	const char* deadlineChar = deadline.c_str();


	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
	fprintf(out_fp, "> %s %s %s %d %s\n\n", companyName, businessNumChar, taskChar, nPeople, deadlineChar);

}