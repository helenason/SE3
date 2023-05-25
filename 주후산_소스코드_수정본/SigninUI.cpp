#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include"SigninUI.h"
#include"Person.h"
#include"Company.h"

SigninUI::SigninUI(Signin* signin)
{
	this->signin = signin;
}

void SigninUI::signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount)
{
	int memClassifier; 
	int num;
	//string name, id, password;
	char name[32];
	char id[32];
	char password[32];

	fscanf(inputFile, "%d %s %d %s %s", memClassifier, name, num, id, password);

	members[*membersCount++] = signin->signin(memClassifier, name, num, id, password, person, companies, companiesCount);

	fprintf(outputFile, "1.1. 회원가입\n");
	fprintf(outputFile, "> %d %s %d %s %s\n", memClassifier, name, num, id, password);

	fprintf(outputFile, "\n");
}