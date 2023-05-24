#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

//Application Application::getApplication() {
	//
//}

string Application::getCompanyName() {
	return this->companyName;
}
string Application::getBusinessNum(){
	return this->businessNum;
}
string Application::getTask() {
	return this->task;
}
int Application::getNumPeople() {
	return this->numPeople;
}
string Application::getApplyDeadline() {
	return this->applyDeadline;
}