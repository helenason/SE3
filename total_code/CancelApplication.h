#pragma once
#include <iostream>
#include <string>

using namespace std;
class CancelApplicationUI;
class Company;
class Member;
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
	Company* cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum);
};