#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "SigninUI.h"
#include "Signin.h"
#include "Member.h"
#include "Company.h"

using namespace std;

SigninUI::SigninUI(Signin* signin)
{
	this->signin = signin;
}

void SigninUI::signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Company** companies, int* companiesCount)
{
	int memClassifier = 0;
	char regNumOrBusinessNum[32];
	//string name, id, password;
	char name[32];
	char id[32];
	char password[32];

	fscanf(inputFile, "%d %s %s %s %s", &memClassifier, name, regNumOrBusinessNum, id, password);

	signin->signin(memClassifier, name, regNumOrBusinessNum, id, password, members, membersCount, companies, companiesCount);

	fprintf(outputFile, "1.1. 회원가입\n");
	fprintf(outputFile, "> %d %s %s %s %s\n", memClassifier, name, regNumOrBusinessNum, id, password);

	fprintf(outputFile, "\n");
}