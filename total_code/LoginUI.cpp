#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "LoginUI.h"
#include "Login.h"
#include "Member.h"

using namespace std;

/*
    함수 이름 : LoginUI::LoginUI()
    기능	  : login 컨트롤 객체 초기화
    전달 인자 : Login* login
    반환값    : 없음
*/
LoginUI::LoginUI(Login* login) {
	this->login = login;
}

/*
    함수 이름 : LoginUI::loginUI()
    기능	  : 입출력 및 로그인 기능 담당하는 login 컨트롤 객체 호출
    전달 인자 : FILE* inputFile, FILE* outputFile, Member** members, int* membersCount
    반환값    : Member*
*/
Member* LoginUI::loginUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount)
{
	char id[32];
	char password[32];

	fscanf(inputFile, "%s %s", id, password);

	fprintf(outputFile, "2.1. 로그인\n");
	fprintf(outputFile, "> %s %s\n", id, password);

	fprintf(outputFile, "\n");

	return login->login(id, password, members, membersCount);
}