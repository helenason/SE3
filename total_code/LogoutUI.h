#pragma once
#include<iostream>
#include "Member.h"

using namespace std;
class Logout;


/*
	클래스 이름: LogoutUI
	기능: 로그아웃 부분의 바운더리 클래스로 입출력을 담당한다.
*/
class LogoutUI
{
private:
	Logout* logout;
public:
	LogoutUI(Logout* logout);
	void logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember);
};