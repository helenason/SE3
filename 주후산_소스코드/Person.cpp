#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(int memClassifier, string personName, string regNum, string id, string password):Member(memClassifier, id, password) {
	/*this->id = id;
	this->password = password;*/

	this->personName = personName;
	this->regNum = regNum;
}

string Person::getPersonName() {
	return this->personName;
}

string Person::getRegNum() {
	return this->regNum;
}



