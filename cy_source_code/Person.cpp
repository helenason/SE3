#include <iostream>
#include <string>
#include "Person.h"
#include "ApplicationCollection.h"
using namespace std;

string Person::getPersonName() {
	return this->personName;
}
string Person::getRegNum() {
	return this->regNum;
}
void Person::addNewApplication(Application* application) {
	this->ownedApplicationCollection->addApplication(application);
}