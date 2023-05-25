#pragma once
#include<iostream>
#include<string>

using namespace std;
class LoginUI;
class Member;

class Login
{
private:
	LoginUI* loginUI;
public:
	Login();
	LoginUI* getLoginUI();
	Member* login(string id, string password, Member** members, int* membersCount);
};