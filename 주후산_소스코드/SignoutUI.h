#pragma once
#include<iostream>
#include<string>
#include"Signout.h"
#include"Member.h"

using namespace std;

class Signout;

class SignoutUI
{
private:
	Signout* signout;
public:
	SignoutUI(Signout* signout);
	void signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int membersCount, Person** people, int peopleCount, Company** companies, int companiesCount);
};