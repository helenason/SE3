#define _CRT_SECURE_NO_WARNINGS 
#include "CancelApplication.h"


/*
	함수 이름 : CancelApplicationUI::selectApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
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
	

	fprintf(outputFile, "4.4 지원 취소\n");
	fprintf(outputFile, "> %s %s %s\n", companyName, businessNum, task);
}

/*
	함수 이름 : CancelApplicationUI::showApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplicationUI::showApplications()
{

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
	함수 이름 : CancelApplication::getCancelApplicationUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}