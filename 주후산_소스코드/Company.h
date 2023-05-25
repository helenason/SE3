#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;


class Company : public Member 
{
private:
	string companyName;
	string businessNum;
public:
	Company(int memClassifier, string companyName, string businessNum, string id, string password);
	string getCompanyName();
	string getBusinessNum();
};