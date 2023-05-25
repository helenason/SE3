#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include "CancelApplicationUI.h"
#include "Company.h"
#include "Member.h"

/*
	함수 이름 : CancelApplication::CancelApplication()
	기능	  : 생성자로 CancelApplicationUI 타입 객체의 생성자에 자신을 인자로 전달해
			   멤버변수 cancelApplicationUI에 할당한다.
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	함수 이름 : CancelApplication::cancelApplication()
	기능	  : 실질적인 지원 취소 부분이다.
			   전체 회사들 중 입력받은 사업자 번호와 같은 회사를 선택하고
			   그 회사의 채용에서 인원 수를 하나 줄이는 Recruitment의 멤버 함수 removePerson을 호출하고
			   채용 정보의 업무를 가져온다. 그리고 그 업무를 인자로 전달해 지원 정보 통계에서 해당 업무의
			   지원자 수를 하나 줄인다.
	전달 인자 : Member* member, Company** companies, int companiesCount, string businessNum
	반환값    : Company*
*/
Company* CancelApplication::cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum)
{
	string task;
	Company* company = 0;

	for (int i = 0; i < companiesCount; i++)
	{
		if (companies[i]->getBusinessNum() == businessNum)
		{
			companies[i]->getRecruitment()->removePerson();

			task = companies[i]->getRecruitment()->getTask();

			companies[i]->subtractApplicantsNumByTask(task);
			company = companies[i];

			break;
		}
	}

	member->cancelApplication(businessNum, task);

	return company;
}

/*
	함수 이름 : CancelApplication::getCancelApplicationUI()
	기능	  : 멤버변수인 바운더리 클래스 cancelApplicationUI을 반환한다.
	전달 인자 : 없음
	반환값    : CancelApplicationUI* 바운더리 클래스를 반환한다.
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}