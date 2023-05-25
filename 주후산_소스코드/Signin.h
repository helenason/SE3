#pragma once
#include<iostream>
#include<string>
#include"SigninUI.h"
#include"Member.h"

using namespace std;

class SigninUI;

class Signin
{
private:
	SigninUI* signinUI;
public:
	Signin();
	SigninUI* getSigninUI();
	Member* signin(int memClassifier, string name, int num, string id, string password, Person** persons, int personsCount, Company** companies, int companiesCount);
};

