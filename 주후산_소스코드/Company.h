#pragma once
#include <iostream>
#include <string>
#include "Member.h"
using namespace std;

class Company : public Member 
{
private:
	string companyName;
	int businessNum;
	string id;
	string password;
public:
	Company(string companyName, int businessNum, string id, string password) :Member(id, password) {
		this->companyName = companyName;
		this->businessNum = businessNum;
	}
	string getCompanyName();
	int getBusinessNum();
	Company getCompany(string companyName);
};