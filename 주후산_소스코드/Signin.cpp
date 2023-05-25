#pragma once
#include <string>
#include "Signin.h"
#include "SigninUI.h"
#include"Person.h"
#include "Company.h"

using namespace std;

Signin::Signin()
{
	signinUI = new SigninUI(this);
}

SigninUI* Signin::getSigninUI() {
	return signinUI;
}

void Signin::signin(int memClassifier, string name, string regNumOrBusinessNum, string id, string password, Member** members, int* membersCount, Company** companies, int* companiesCount) {
	Person* newPerson = 0;
	Company* newCompany = 0;
	cout << "memClassifier: " << memClassifier<<endl;
	switch (memClassifier)
	{
	case 1:
		newPerson = new Person(memClassifier, name, regNumOrBusinessNum, id, password);
		members[(* membersCount)++] = newPerson;
		cout <<"*membersCount: "<< * membersCount;
		break;
	case 2:
		newCompany = new Company(memClassifier, name, regNumOrBusinessNum, id, password);
		members[(* membersCount)++] = newCompany;
		companies[(* companiesCount)++] = newCompany;
		break;
	default:
		break;
	}
}