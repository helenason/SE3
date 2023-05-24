#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Apply.h"
#include "Company.h"
#include "ApplyUI.h"

void ApplyUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember) {
	char businessNum[32];
	fscanf(in_fp, "%s", businessNum);

	Apply* apply;
	Application* appliedApp;

	appliedApp = apply->apply(businessNum, companies, companiesCount, loginMember);

	// 해당 application의 정보 가져오기
	const char* companyName = appliedApp->getCompanyName().c_str();
	const char* task = appliedApp->getTask().c_str();

	fprintf(out_fp, "4.1. 채용 지원\n");
	fprintf(out_fp, "%s %s %s\n", companyName, businessNum, task);
}