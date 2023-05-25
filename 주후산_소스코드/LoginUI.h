#pragma once
#include<iostream>
#include"Login.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class Login;

class LoginUI
{
private:
	Login* login;
public:
	LoginUI(Login* login);
	void loginUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int membersCount);
};