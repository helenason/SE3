#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include "SignoutUI.h"
#include "Signout.h"
#include "Member.h"
#include "Company.h"

using namespace std;


/*
    함수 이름 : SignoutUI::SignoutUI
    기능	  : Signout 컨트롤 객체 초기화
    전달 인자 : Signout* signout
    반환값    : 없음
*/
SignoutUI::SignoutUI(Signout* signout)
{
	this->signout = signout;
}

/*
    함수 이름 : SignoutUI::signoutUI
    기능	  : 입출력 및 회원 탈퇴를 수행하는 signout 컨트롤 객체에 인자 전달 
    전달 인자 : FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount
    반환값    : 없음
*/
void SignoutUI::signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount) {
	fprintf(outputFile, "1.2. 회원탈퇴\n");

	string loginMemberId = loginMember->getId();
	const char* loginMemberIdChar = loginMemberId.c_str();

	signout->signout(loginMember, members, membersCount, companies, companiesCount);



	fprintf(outputFile, "> %s\n", loginMemberIdChar);
	fprintf(outputFile, "\n");
}