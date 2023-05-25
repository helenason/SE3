#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "ApplyUI.h"
#include "Company.h"
#include "Member.h"
#include "Apply.h"
#include "Application.h"


/*
	함수 이름 : ApplyUI::enterTerms()
	기능	  : boundary 클래스로서 입력 및 출력 기능
	전달 인자 : FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember
	반환값    : 없음
*/

void ApplyUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember) {
	char businessNum[32];
	fscanf(in_fp, "%s", businessNum);

	Apply* apply = this->apply;
	Application* appliedApp;
	//businessNum
	appliedApp = apply->apply(businessNum, companies, companiesCount, loginMember);

	// 해당 application의 정보 가져오기
	string companyName = appliedApp->getCompanyName();
	string task = appliedApp->getTask();

	const char* companyNameChar = companyName.c_str();
	const char* taskChar = task.c_str();

	fprintf(out_fp, "4.2. 채용 지원\n");
	fprintf(out_fp, "> %s %s %s\n\n", companyNameChar, businessNum, taskChar);
}