#pragma once
#include<string>
#include"ShowApplicationsUI.h"
#include "Member.h"
#include "ShowApplications.h"

/*
	함수 이름 : ShowApplicationsUI::showAllApplications()
	기능	  : 컨트롤 클래스의 showApplications를 호출해 현재 로그인 한 회원이
			   가지고 있는 지원 정보 리스트를 가져온다.
			   그리고 그 리스트를 이용해 지원 세부 정보(회사 이름, 사업자 번호, 업무, 인원 수, 마감 기간)
			   를 파일에 출력한다.
	전달 인자 : FILE* inputFile, FILE* outputFile, Member* loginMember
	반환값    : 없음
*/
void ShowApplicationsUI::showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	fprintf(outputFile, "4.3. 지원 정보 조회\n");
	ApplicationCollection* applicationCollection = this->showApplications->showApplications(loginMember);

	Application** applications = applicationCollection->getApplications();

	for (int i = 0; i < applicationCollection->getCount(); i++)
	{
		string companyName = applications[i]->getCompanyName();
		string businessNum = applications[i]->getBusinessNum();
		string task = applications[i]->getTask();
		int numPeople = applications[i]->getNumPeople();
		string applyDeadline = applications[i]->getApplyDeadline();

		const char* companyNameChar = companyName.c_str();
		const char* businessNumChar = businessNum.c_str();
		const char* taskChar = task.c_str();
		const char* applyDeadlineChar = applyDeadline.c_str();

		fprintf(outputFile, "> %s %s %s %d %s\n", companyNameChar, businessNumChar, taskChar, numPeople, applyDeadlineChar);
	}

	fprintf(outputFile, "\n");
}

/*
	함수 이름 : ShowApplicationsUI::ShowApplicationsUI()
	기능	  : 생성자로 ShowApplicationsUI* 타입 객체의 생성자에 자신을 인자로 전달해
			   멤버변수인 showApplications에 할당한다.
	전달 인자 : ShowApplications* showApplications
	반환값    : 없음
*/

ShowApplicationsUI::ShowApplicationsUI(ShowApplications* showApplications)
{
	this->showApplications = showApplications;
}