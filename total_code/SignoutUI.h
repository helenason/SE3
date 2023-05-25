#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class Signout;

/*
	클래스 이름: SignoutUI
	클래스 기능: 회원탈퇴의 부분을 담당하는 바운더리 클래스로, 입출력을 담당한다.
*/
class SignoutUI
{
private:
	Signout* signout;
public:
	SignoutUI(Signout* signout);
	void signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};