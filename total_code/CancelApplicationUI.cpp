#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "CancelApplicationUI.h"
#include "Company.h"
#include "Member.h"
#include "CancelApplication.h"

/*
	함수 이름 : CancelApplicationUI::selectApplication()
	기능	  : 컨트롤 클래스의 cancelApplication을 호출해 지원 취소하려는 채용을 가진 회사를 반환한다.
			   반환받은 회사에서 회사 이름과 업무를 추출해 입력받은 사업자 번호와 함께 파일에 출력한다.
	전달 인자 : FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount
	반환값    : 없음
*/
void CancelApplicationUI::selectApplication(FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount)
{
	char businessNumChar[32];

	fscanf(inputFile, "%s", businessNumChar);

	string businessNum(businessNumChar);

	Company* company = this->cancelApplication->cancelApplication(loginMember, companies, companiesCount, businessNum);

	string companyName = company->getRecruitment()->getCompanyName();
	string task = company->getRecruitment()->getTask();

	const char* companyNameChar = companyName.c_str();
	const char* taskChar = task.c_str();

	fprintf(outputFile, "4.4 지원 취소\n");
	fprintf(outputFile, "> %s %s %s\n\n", companyNameChar, businessNumChar, taskChar);
}

/*
	함수 이름 : CancelApplicationUI::CancelApplicationUI()
	기능	  : 생성자로 CancelApplication 타입 객체의 생성자에 자신을 인자로 전달해
			   멤버변수 cancelApplication에 할당한다.
	전달 인자 : CancelApplication* cancelApplication
	반환값    : 없음
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}
