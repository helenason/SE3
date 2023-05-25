#pragma once
#include <iostream>
#include"Signin.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class Signin;
class Member;
class Person;
class Company;

class SigninUI
{
private:
	Signin* signin;
public:
	SigninUI(Signin* signin);
	void signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount);
};