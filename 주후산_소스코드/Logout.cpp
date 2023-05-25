#include<string>
#include"Logout.h"
#include"Member.h"

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
	Member* member;
	member->memberLogout(loginMember);
}