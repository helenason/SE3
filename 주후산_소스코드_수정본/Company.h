#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Person.h"

using namespace std;

class Member;

class Company : public Member 
{
private:
	string companyName;
	int businessNum;
	string id;
	string password;
public:
	Company(string companyName, int businessNum, string id, string password);
	string getCompanyName();
	int getBusinessNum();
	string getId();
	Company getCompany(string companyName);
};