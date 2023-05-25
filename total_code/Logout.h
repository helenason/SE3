#pragma once
#include<iostream>
#include<string>
#include"Member.h"

using namespace std;
class LogoutUI;


/*
	클래스 이름: Logout
	기능: 로그아웃 부분의 컨트롤 클래스로 로그아웃 처리를 한다.
*/
class Logout
{
private:
	LogoutUI* logoutUI;
public:
	Logout();
	LogoutUI* getLogoutUI();
	void logout(Member* loginMember);
};