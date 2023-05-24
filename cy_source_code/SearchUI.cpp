#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SearchUI.h"
#include "Search.h"

void SearchUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount) {
	
	// �Է�
	char companyName[32];
	fscanf(in_fp, "%s", companyName);

	// to control class
	Search* search;
	Recruitment* searchedRecruitment;

	searchedRecruitment = search->searchRecruitmentByCompanyName(companyName, companies, companiesCount);

	// ����� ���� recruitment�� getter �Լ��� (diagram �׷��� �ϴ���)
	const char* businessNum = (searchedRecruitment->getBusinessNum()).c_str();
	const char* task = (searchedRecruitment->getTask()).c_str();
	int nPeople = searchedRecruitment->getNumPeople();
	const char* deadline = (searchedRecruitment->getApplyDeadline()).c_str();

	// ���
	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
	fprintf(out_fp, "%s %s %s %d %s\n", companyName, businessNum, task, nPeople, deadline);

}