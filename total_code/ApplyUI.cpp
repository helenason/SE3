#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "Apply.h"
#include "Company.h"
#include "Member.h"
#include "ApplyUI.h"

/*
	�Լ� �̸� : ApplyUI::enterTerms()
	���	  : boundary Ŭ�����μ� �Է� �� ��� ���
	���� ���� : FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember
	��ȯ��    : ����
*/

void ApplyUI::enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember) {
	char businessNum[32];
	fscanf(in_fp, "%s", businessNum);

	Apply* apply = this->apply;
	Application* appliedApp;

	appliedApp = apply->apply(businessNum, companies, companiesCount, loginMember);

	// �ش� application�� ���� ��������
	string companyName = appliedApp->getCompanyName();
	string task = appliedApp->getTask();

	const char* companyNameChar = companyName.c_str();
	const char* taskChar = task.c_str();

	fprintf(out_fp, "4.2. ä�� ����\n");
	fprintf(out_fp, "> %s %s %s\n", companyNameChar, businessNum, taskChar);
}