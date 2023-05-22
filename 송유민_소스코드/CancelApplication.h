#include<iostream>
#include <string>
#include "Entities.h"

using namespace std;

class CancelApplication;

/*
	클래스 이름 : CancelApplicationUI
	기능	  :
*/
class CancelApplicationUI
{
private:
	CancelApplication* cancelApplication;
public:
	CancelApplicationUI(CancelApplication* cancelApplication);
	void selectApplication(FILE* inputFile, FILE* outputFile, Person* person, Company** companies);
	void showApplications();


};

/*
	클래스 이름 :
	기능	  :
*/
class CancelApplication
{
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	CancelApplication();
	CancelApplicationUI* getCancelApplicationUI();
	Company* cancelApplication(Person* person, Company** companies, string businessNum);
};