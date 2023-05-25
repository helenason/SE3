#pragma once
#include <iostream>
#include "Member.h"
#include "Company.h"

using namespace std;
class Signin;

/*
	클래스 이름: SigninUI
	클래스 기능: 회원가입 부분을 담당하는 바운더리 클래스로, 입출력을 담당한다.
*/
class SigninUI
{
private:
	Signin* signin;
public:
	SigninUI(Signin* signin);
	void signinUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount, Company** companies, int* companiesCount);
};