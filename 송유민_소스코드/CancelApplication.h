#include<iostream>
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
	void selectApplication(FILE* inputFile, FILE* outputFile, Member* member, Company** companies);
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
	Company* cancelApplication(Member* member, Company** companies, char* businessNum);
};