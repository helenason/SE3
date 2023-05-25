#pragma once
#include<iostream>
#include<string>
#include"LogoutUI.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class LogoutUI;
class Member;

class Logout
{
private:
	LogoutUI* logoutUI;
public:
	Logout();
	LogoutUI* getLogoutUI();
	void logout(Member* loginMember);
};