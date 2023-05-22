#include<iostream>
#include <string>
#include "Entities.h"

using namespace std;

class CancelApplication;

/*
	Ŭ���� �̸� : CancelApplicationUI
	���	  :
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
	Ŭ���� �̸� :
	���	  :
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