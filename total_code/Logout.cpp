#pragma once
#include<string>
#include "Logout.h"
#include "LogoutUI.h"
#include "Member.h"

using namespace std;

Logout::Logout()
{
	logoutUI = new LogoutUI(this);
}

LogoutUI* Logout::getLogoutUI()
{
	return logoutUI;
}

void Logout::logout(Member* loginMember)
{
	loginMember = NULL;
}