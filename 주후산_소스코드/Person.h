#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;



class Person : public Member {
private:
	string personName;
	string regNum;
public:
	Person(int memClassifier, string personName, string regNum, string id, string password);
	string getPersonName();
	string getRegNum();
};