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

	string loginID = loginMember->getId(); // 회사 직원의 ID

	SearchRecruitmentList* searchList = nullptr;
	Recruitment* searchedRecruitment;
	
	// 회사 직원의 ID를 searchCompanyRecruitments()의 인자로 받아 찾은 recruitment를 저장
	searchedRecruitment = searchList->searchCompanyRecruitments(loginID, loginMember);

	string task = searchedRecruitment->getTask(); // 해당 recruitment의 업무
	string deadline = searchedRecruitment->getApplyDeadline(); // 해당 recruitment의 마감일
	int nPeople = searchedRecruitment->getNumPeople(); // 해당 recruitment의 인원수

	const char* taskChar = task.c_str();
	const char* deadlineChar = deadline.c_str();

	fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
	fprintf(out_fp, "> %s %d %s\n\n", taskChar, nPeople, deadlineChar);
}