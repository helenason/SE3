#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(string personName, int regNum, string id, string password):Member(id, password) {
	this->id = id;
	this->password = password;
	this->personName = personName;
	this->regNum = regNum;
}

string Person::getPersonName() {
	return this->personName;
}

int Person::getRegNum() {
	return this->regNum;
}

string Person::getId()
{
	return this->id;
}

Person Person::getPerson(string personName) {
	return Person(personName, this->regNum, this->id, this->password);
}
