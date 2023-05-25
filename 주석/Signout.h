#pragma once
#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class SignoutUI;

class Signout
{
private:
	SignoutUI* signoutUI;
public:
	Signout();
	SignoutUI* getSignoutUI();
	void signout(Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};