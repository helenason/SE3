#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"

using namespace std;

LogoutUI::LogoutUI(Logout* logout)
{
	this->logout = logout;
}

void LogoutUI::logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	string loginMemberId = loginMember->getId().c_str();

	const char* loginMemberIdChar = loginMemberId.c_str();

	fprintf(outputFile, "2.2. ·Î±×¾Æ¿ô\n");
	fprintf(outputFile, "> %s\n", loginMemberIdChar);

	logout->logout(loginMember);

	fprintf(outputFile, "\n");
}