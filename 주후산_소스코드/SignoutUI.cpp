#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "SignoutUI.h"
#include"Signout.h"
#include"Member.h"

using namespace std;

SignoutUI::SignoutUI(Signout* signout)
{
	this->signout = signout;
}

void SignoutUI::signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount) {
	fprintf(outputFile, "1.2. È¸¿øÅ»Åð\n");
	
	string loginMemberId = loginMember->getId();
	const char* loginMemberIdChar = loginMemberId.c_str();

	signout->signout(loginMember, members, membersCount, companies, companiesCount);

	

	fprintf(outputFile, "> %s\n", loginMemberIdChar);
	fprintf(outputFile, "\n");
}