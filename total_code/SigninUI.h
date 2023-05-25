#pragma once
#include <iostream>
#include "Member.h"
#include "Company.h"

using namespace std;
class Signin;

class SigninUI
{
private:
	Signin* signin;
public:
	SigninUI(Signin* signin);
	void signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Company** companies, int* companiesCount);
};