#pragma once
#include<iostream>
#include"Logout.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class Logout;
class Member;

class LogoutUI
{
private:
	Logout* logout;
public:
	LogoutUI(Logout* logout);
	void logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember);
};