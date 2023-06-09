#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "SearchRecruitmentListUI.h"
#include "Member.h"
#include "SearchRecruitmentList.h"

/*
	함수 이름: SearchRecruitmentListUI::searchRecruitments()
	기능: out_fp에 회사 직원이 등록한 채용 정보를 조회한 결과 반환
	전달 인자: File* out_fp, Member* loginMember
	반환값: 없음
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

	fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
	fprintf(out_fp, "> %s %d %s\n\n", taskChar, nPeople, deadlineChar);
}