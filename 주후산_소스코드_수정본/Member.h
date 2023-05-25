#pragma once
#include <iostream>
#include <string>
#include"Member.h"
#include"Person.h"
#include"Company.h"
using namespace std;

class Member;
class Person;
class Company;

class Member 
{
private:
	int memClassifier;
	string name;
	int num;
	string id;
	string password;
public:
	Member(string id, string password);
	int getMemClassifier();
	string getId();
	string getPassword();
	Member* createNewMember(int memClassifier, string name, int num, string id, string password, Person* person, Company** companies, int* companiesCount);
	Member* checkMemberLogin(string id, string password, Member** members, int* membersCount);
	void memberLogout(Member* loginMember);
	void deleteMember(Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount);
};