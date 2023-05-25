#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SearchRecruitmentListUI.h"
#include "SearchRecruitmentList.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

/*
	�Լ� �̸�: SearchRecruitmentListUI::searchRecruitments()
	���: out_fp�� ȸ�� ������ ����� ä�� ������ ��ȸ�� ��� ��ȯ
	���� ����: File* out_fp, Member* loginMember
	��ȯ��: ����
*/
void SearchRecruitmentListUI::searchRecruitment(FILE* out_fp, Member* loginMember) {

	string loginID = loginMember->getId();

	SearchRecruitmentList* searchList = nullptr;
	Recruitment* searchedRecruitment;

	searchedRecruitment = searchList->searchCompanyRecruitments(loginID, loginMember);

	string task = searchedRecruitment->getTask();
	string deadline = searchedRecruitment->getApplyDeadline();
	int nPeople = searchedRecruitment->getNumPeople();

	const char* taskChar = task.c_str();
	const char* deadlineChar = deadline.c_str();

	fprintf(out_fp, "3.2. ��ϵ� ä�� ���� ��ȸ\n");
	fprintf(out_fp, "> %s %d %s\n", taskChar, nPeople, deadlineChar);
}