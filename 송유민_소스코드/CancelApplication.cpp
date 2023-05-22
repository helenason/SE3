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
	string businessNum;

	fscanf(inputFile, "%s", businessNum);


	cancelApplication->cancelApplication(person, companies, businessNum);




	fprintf(outputFile, "%s\n", businessNum);
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
	함수 이름 : CancelApplication::getCancelApplicationUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI()
{
	return cancelApplicationUI;
}