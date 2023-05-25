#pragma once
#include<iostream>
#include<string>

using namespace std;
class LoginUI;
class Member;

/*
	클래스 이름: Login
	기능: 로그인 부분을 담당하는 컨트롤 클래스이다. 입력값과 회원 정보를 비교해
		로그인 처리를 한다.
*/
class Login
{
private:
	LoginUI* loginUI;
public:
	Login();
	LoginUI* getLoginUI();
	Member* login(string id, string password, Member** members, int* membersCount);
};