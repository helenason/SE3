#pragma once
#include<iostream>
#include<string>
#include"SigninUI.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class SigninUI;
class Member;
class Person;
class Company;

class Signin
{
private:
	SigninUI* signinUI;
public:
	Signin();
	SigninUI* getSigninUI();
	Member* signin(int memClassifier, string name, int num, string id, string password, Person* person, Company** companies, int* companiesCount);
};

