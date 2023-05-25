#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class SigninUI;

class Signin
{
private:
	SigninUI* signinUI;
public:
	Signin();
	SigninUI* getSigninUI();
	void signin(int memClassifier, string name, string regNumOrBusinessNum, string id, string password, Member** members, int* membersCount, Company** companies, int* companiesCount);
};

