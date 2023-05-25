#pragma once
#include<iostream>
#include<string>
#include"SignoutUI.h"
#include"Member.h"

using namespace std;

class SignoutUI;

class Signout
{
private:
	SignoutUI* signoutUI;
public:
	Signout();
	SignoutUI* getSignoutUI();
	void signout(Member* loginMember, Member** members, int membersCount, Person** persons, int personsCount, Company** companies, int companiesCount);
};