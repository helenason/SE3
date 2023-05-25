#pragma once
#include<iostream>
#include<string>
#include"LoginUI.h"
#include"Member.h"

using namespace std;

class LoginUI;

class Login
{
private:
	LoginUI* loginUI;
public:
	Login();
	LoginUI* getLoginUI();
	Member* login(string id, string password, Member** members, int membersCount);
};