#pragma once
#include <string>
#include "Signin.h"
#include "SigninUI.h"
#include "Person.h"
#include "Company.h"

using namespace std;
/*
	함수 이름 : Signin::Signin()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Signin::Signin()
{
	signinUI = new SigninUI(this);
}
/*
	함수 이름 :
	기능	  :
	전달 인자 : 
	반환값    : 
*/
SigninUI* Signin::getSigninUI() {
	return signinUI;
}
/*
	함수 이름 : ShowStatistics::printStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
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