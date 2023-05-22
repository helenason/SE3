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
	string businessNum;

	fscanf(inputFile, "%s", businessNum);


	cancelApplication->cancelApplication(person, companies, businessNum);




	fprintf(outputFile, "%s\n", businessNum);
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
void CancelApplication::cancelApplication(Person* person, Company** companies, string businessNum)
{
	person->cancelApplication(businessNum);

	for (int i = 0; i < 100; i++) {
		if (companies[i]->getBusinessNum() == businessNum)
		{
			companies[i]->listRecruitments();
		}
	}
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