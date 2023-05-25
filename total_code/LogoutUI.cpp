#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"

using namespace std;

/*
    함수 이름 : LogoutUI::LogoutUI()
    기능	  : logout 컨트롤 객체 초기화
    전달 인자 : Logout* logout
    반환값    : 없음
*/
LogoutUI::LogoutUI(Logout* logout)
{
	this->logout = logout;
}

/*
    함수 이름 : LogoutUI::logoutUI()
    기능	  : 입출력 및 로그아웃 기능 수행하는 logout 컨트롤 객체 호출
    전달 인자 : FILE* inputFile, FILE* outputFile, Member* loginMember
    반환값    : 없음
*/
void LogoutUI::logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	string loginMemberId = loginMember->getId().c_str();

	const char* loginMemberIdChar = loginMemberId.c_str();

	fprintf(outputFile, "2.2. 로그아웃\n");
	fprintf(outputFile, "> %s\n", loginMemberIdChar);

	logout->logout(loginMember);

	fprintf(outputFile, "\n");
}