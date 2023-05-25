#pragma once
#include <string>
#include "Signin.h"
#include "SigninUI.h"
#include "Person.h"
#include "Company.h"

using namespace std;
/*
	�Լ� �̸� : Signin::Signin()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Signin::Signin()
{
	signinUI = new SigninUI(this);
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� : 
	��ȯ��    : 
*/
SigninUI* Signin::getSigninUI() {
	return signinUI;
}
/*
	�Լ� �̸� : ShowStatistics::printStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Signin::signin(int memClassifier, string name, string regNumOrBusinessNum, string id, string password, Member** members, int* membersCount, Company** companies, int* companiesCount) {
	Person* newPerson = 0;
	Company* newCompany = 0;
	switch (memClassifier)
	{
	case 1:
		newCompany = new Company(memClassifier, name, regNumOrBusinessNum, id, password);
		members[(*membersCount)++] = newCompany;
		companies[(*companiesCount)++] = newCompany;
		break;
	case 2:
		newPerson = new Person(memClassifier, name, regNumOrBusinessNum, id, password);
		members[(*membersCount)++] = newPerson;
		break;
	default:
		break;
	}
}