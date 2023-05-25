#pragma once
#include<iostream>

using namespace std;
class Login;
class Member;

class LoginUI
{
private:
	Login* login;
public:
	LoginUI(Login* login);
	Member* loginUI(FILE* inputFile, FILE* outputFile, Member** members, int* membersCount);
};