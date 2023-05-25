#pragma once
#include<iostream>

using namespace std;
class Login;
class Member;


/*
	클래스 이름: LoginUI
	기능 : 로그인 부분의 바운더리 클래스로 입출력을 담당한다.
*/
class LoginUI
{
private:
	Login* login;
public:
	LoginUI(Login* login);
	Member* loginUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount);
};