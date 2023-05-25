#pragma once
#include<iostream>
#include "Member.h"

using namespace std;
class Logout;

class LogoutUI
{
private:
	Logout* logout;
public:
	LogoutUI(Logout* logout);
	void logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember);
};