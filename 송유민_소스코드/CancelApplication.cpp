#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"


/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::selectApplication(FILE* inputFile, FILE* outputFile, Person* person, Company** companies)
{
	char businessNum[32];

	fscanf(inputFile, "%s", businessNum);
	cout << "businessNum: " << businessNum;
	fprintf(outputFile, "%s", businessNum);

	


	Company* company = cancelApplication->cancelApplication(person, companies, businessNum);

	const char* companyName = company->getRecruitment()->getCompanyName();
	string task = company->getRecruitment()->getTask();
	

	fprintf(outputFile, "4.4 ���� ���\n");
	fprintf(outputFile, "> %s %s %s\n", companyName, businessNum, task);
}

/*
	�Լ� �̸� : CancelApplicationUI::showApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::showApplications()
{

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
Company* CancelApplication::cancelApplication(Person* person, Company** companies, char* businessNum)
{
	string task;
	Company* company = NULL;

	for (int i = 0; i < 100; i++)
	{
		cout << companies[i]->getBusinessNum() << " and " << businessNum;
		if (companies[i]->getBusinessNum() == businessNum)
		{
			companies[i]->getRecruitment()->removePerson();
			task = companies[i]->getRecruitment()->getTask();

			companies[i]->updateApplicantsNumByTask(task);
			company = companies[i];
			person->cancelApplication(businessNum, task);
			break;
		}
	}
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