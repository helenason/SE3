#pragma once
#include<iostream>
#include<string>
#include"SignoutUI.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

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
	void signout(Member* loginMember, Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount);
};