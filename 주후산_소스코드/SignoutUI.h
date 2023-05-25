#pragma once
#include<iostream>
#include<string>

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
	void signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};