#pragma once
#include <iostream>
#include <string>
#include"Member.h"
#include"Company.h"

using namespace std;

class Member;
class Person;

class Person : public Member {
private:
	string personName;
	int regNum;
	string id;
	string password;
public:
	Person(string personName, int regNum, string id, string password);
	string getPersonName();
	int getRegNum();
	string getId();
	Person getPerson(string personName);
};