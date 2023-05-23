#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"
#include <cstring>


/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	

	fprintf(outputFile, "4.4 ���� ���\n");
	fprintf(outputFile, "> %s %s %s\n", companyName, businessNum, task);
}

/*
	�Լ� �̸� : CancelApplicationUI::CancelApplicationUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}


/*
	�Լ� �̸� : CancelApplication::CancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplication::CancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}

/*
	�Լ� �̸� : CancelApplication::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : CancelApplication::getCancelApplicationUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}