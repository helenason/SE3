#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

string Person::getPersonName() {
	return this->personName;
}
string Person::getRegNum() {
	return this->regNum;
}
void Person::listApplications() {

}
void Person::cancelApplication() {

}
void Person::deleteApplication() {

}
Person Person::getPerson() {

}
void Person::addNewApplication(Application* application) {
	this->applicationCollection.addApplication(application);
}