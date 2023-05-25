#pragma once
#include<iostream>
#include<string>
#include"Signout.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

using namespace std;

class Signout;
class Member;
class Person;
class Company;

class SignoutUI
{
private:
	Signout* signout;
public:
	SignoutUI(Signout* signout);
	void signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount);
};