#pragma once
#include <iostream>
#include <string>

using namespace std;
class CancelApplicationUI;
class Company;
class Member;
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