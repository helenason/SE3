#include <iostream>
#include <string>
#include "Member.h"
using namespace std;

class Person : public Member {
private:
	string personName;
	int regNum;

public:
	Person(string personName, int regNum, string id, string password) :Member(id, password) {
		this->personName = personName;
		this->regNum = regNum;
	}
	string getPersonName();
	int getRegNum();
	Person getPerson();
};