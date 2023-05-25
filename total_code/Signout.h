#pragma once
#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class SignoutUI;

/*
	클래스 이름: Signout
	클래스 기능: 회원탈퇴 부분을 담당하는 컨트롤 클래스이다.
*/
class Signout
{
private:
	SignoutUI* signoutUI;
public:
	Signout();
	SignoutUI* getSignoutUI();
	void signout(Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};