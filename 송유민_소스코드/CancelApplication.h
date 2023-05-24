#pragma once
#include<iostream>
#include<string>
#include"CancelApplicationUI.h"
#include "Member.h"


using namespace std;

class Company;
class CancelApplicationUI;

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
	Company* cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum);
};