#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}

string Member::getId() {
	return this->id;
}

string Member::getPassword() {
	return this->password;
}

string Member::getBusinessNum() {
	return this->businessNum;
}