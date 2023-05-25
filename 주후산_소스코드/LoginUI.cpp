#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "LoginUI.h"

using namespace std;

LoginUI::LoginUI(Login* login) {
	this->login = login;
}

Member* LoginUI::loginUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount)
{
	char id[32]; 
	char password[32];

	fscanf(inputFile, "%s %s", id, password);

	

	fprintf(outputFile, "2.1. ·Î±×ÀÎ\n");
	fprintf(outputFile, "> %s %s\n", id, password);

	fprintf(outputFile, "\n");
	
	return login->login(id, password, members, membersCount);
}