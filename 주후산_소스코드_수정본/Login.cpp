#pragma once
#include<string>
#include"Login.h"

Login::Login()
{
	loginUI = new LoginUI(this);
}

LoginUI* Login::getLoginUI()
{
	return loginUI;
}

Member* Login::login(string id, string password, Member** members, int* membersCount)
{
	Member* member;
	return member->checkMemberLogin(id, password, members, membersCount);
}