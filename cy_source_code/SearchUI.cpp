#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SearchUI.h"
#include "Search.h"

void SearchUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount) {
	
	// 입력
	char companyName[32];
	fscanf(in_fp, "%s", companyName);

	// to control class
	Search* search;
	Recruitment* searchedRecruitment;

	searchedRecruitment = search->searchRecruitmentByCompanyName(companyName, companies, companiesCount);

	// 출력을 위한 recruitment의 getter 함수들 (diagram 그려야 하는지)
	const char* businessNum = (searchedRecruitment->getBusinessNum()).c_str();
	const char* task = (searchedRecruitment->getTask()).c_str();
	int nPeople = searchedRecruitment->getNumPeople();
	const char* deadline = (searchedRecruitment->getApplyDeadline()).c_str();

	// 출력
	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	fprintf(out_fp, "%s %s %s %d %s\n", companyName, businessNum, task, nPeople, deadline);

}