#pragma once
#include<string>
#include "Logout.h"
#include "LogoutUI.h"
#include "Member.h"

using namespace std;

/*
    함수 이름 : Logout::Logout()
    기능	  : logout 바운더리 객체 초기화
    전달 인자 : 없음
    반환값    : 없음
*/
Logout::Logout()
{
	logoutUI = new LogoutUI(this);
}

/*
    함수 이름 : Logout::getLogoutUI()
    기능	  : logoutUI 바운더리 객체 반환
    전달 인자 : 없음
    반환값    : LogoutUI*
*/
LogoutUI* Logout::getLogoutUI()
{
	return logoutUI;
}

/*
    함수 이름 : Logout::logout()
    기능	  : 로그인한 member 객체를 의미하는 loginMember 객체를 비워서 로그아웃 기능 구현
    전달 인자 : Member* loginMember
    반환값    : 없음
*/
void Logout::logout(Member* loginMember)
{
	loginMember = NULL;
}