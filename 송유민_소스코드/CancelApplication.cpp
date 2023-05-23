#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include <cstring>


/*
	함수 이름 : CancelApplicationUI::selectApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplicationUI::selectApplication(FILE* inputFile, FILE* outputFile, Member* member, Company** companies)
{
	char businessNum[32];

	fscanf(inputFile, "%s", businessNum);

	Company* company = cancelApplication->cancelApplication(member, companies, businessNum);

	char companyName[32];
	strcpy(companyName, company->getRecruitment()->getCompanyName());

	char task[32];
	strcpy(task, company->getRecruitment()->getTask());
	

	fprintf(outputFile, "4.4 지원 취소\n");
	fprintf(outputFile, "> %s %s %s\n", companyName, businessNum, task);
}

/*
	함수 이름 : CancelApplicationUI::CancelApplicationUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}


/*
	함수 이름 : CancelApplication::CancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	함수 이름 : CancelApplication::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Company* CancelApplication::cancelApplication(Member* member, Company** companies, char* businessNum)
{
	char task[32];
	Company* company = NULL;

	for (int i = 0; i < 100; i++)
	{
		cout << companies[i]->getBusinessNum() << " and " << businessNum;
		if (!strcmp(companies[i]->getBusinessNum(), businessNum))
		{
			companies[i]->getRecruitment()->removePerson();
			
			strcpy(task, companies[i]->getRecruitment()->getTask());

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
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}