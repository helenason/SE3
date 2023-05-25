#pragma once
#include<iostream>
#include<string>
#include "Member.h"
#include "Company.h"

using namespace std;
class Signout;

class SignoutUI
{
private:
	Signout* signout;
public:
	SignoutUI(Signout* signout);
	void signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount);
};