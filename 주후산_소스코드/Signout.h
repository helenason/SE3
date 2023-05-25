#pragma once
#include<iostream>
#include<string>

using namespace std;

class SignoutUI;
class Member;
class Person;
class Company;

class Signout
{
private:
	SignoutUI* signoutUI;
public:
	Signout();
	SignoutUI* getSignoutUI();
	void signout(Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};