#pragma once
#include<iostream>
#include<string>
#include"Member.h"

using namespace std;
class LogoutUI;

class Logout
{
private:
	LogoutUI* logoutUI;
public:
	Logout();
	LogoutUI* getLogoutUI();
	void logout(Member* loginMember);
};