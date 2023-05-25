#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class SigninUI;

/*
	클래스 이름: Signin
	클래스 기능: 회원가입 부분을 담당하는 컨트롤 클래스이다.
*/
class Signin
{
private:
	SigninUI* signinUI;
public:
	Signin();
	SigninUI* getSigninUI();
	void signin(int memClassifier, string name, string regNumOrBusinessNum, string id, string password, Member** members, int* membersCount, Company** companies, int* companiesCount);
};

