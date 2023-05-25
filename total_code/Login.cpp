#pragma once
#include <string>
#include "Login.h"
#include "LoginUI.h"
#include "Member.h"

using namespace std;

/*
    함수 이름 : Login::Login()
    기능	  : loginUI 바운더리 객체 초기화
    전달 인자 : 없음
    반환값    : 없음
*/
Login::Login()
{
	loginUI = new LoginUI(this);
}

/*
    함수 이름 : Login::getLoginUI()
    기능	  : loginUI 바운더리 객체 반환
    전달 인자 : 없음
    반환값    : LoginUI*
*/
LoginUI* Login::getLoginUI()
{
	return loginUI;
}

/*
    함수 이름 : Login::login()
    기능	  : 전달받은 id와 password와 일치한 속성값을 갖는 멤버 객체를 찾아 반환하여 loginMember에 저장
    전달 인자 : string id, string password, Member** members, int* membersCount
    반환값    : Member*
*/
Member* Login::login(string id, string password, Member** members, int* membersCount)
{
	for (int i = 0; i < *membersCount; i++) {
		if ((members[i]->getId() == id) && (members[i]->getPassword() == password)) {
			return members[i];
		}
	}
}