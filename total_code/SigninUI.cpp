#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "SigninUI.h"
#include "Signin.h"
#include "Member.h"
#include "Company.h"

using namespace std;

/*
    함수 이름 : SigninUI::SigninUI()
    기능	  : Signin 컨트롤 객체 초기화
    전달 인자 : Signin* signin
    반환값    : 없음
*/
SigninUI::SigninUI(Signin* signin)
{
	this->signin = signin;
}


/*
    함수 이름 : SigninUI::signinUI()
    기능	  : 입출력 및 Signin 컨트롤 객체 생성
    전달 인자 : FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Company** companies, int* companiesCount
    반환값    : 없음
*/
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

	fprintf(outputFile, "1.1. ȸ������\n");
	fprintf(outputFile, "> %d %s %s %s %s\n", memClassifier, name, regNumOrBusinessNum, id, password);

	fprintf(outputFile, "\n");
}