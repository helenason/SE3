#pragma once
#include <iostream>

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
	void signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Company** companies, int* companiesCount);
};