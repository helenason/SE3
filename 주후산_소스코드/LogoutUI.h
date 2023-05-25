#pragma once
#include<iostream>
#include "Logout.h"

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