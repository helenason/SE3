#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

string Person::getPersonName() {
	return this->personName;
}

int Person::getRegNum() {
	return this->regNum;
}

Person Person::getPerson() {
	return Person(this->personName, this->regNum, this->id, this->password);
}