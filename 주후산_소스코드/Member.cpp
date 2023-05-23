#include <iostream>
#include <string>
#include "Member.h"
#include "Person.h"
#include "Company.h"
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

void Member::createNewMember() {
	switch (memClassifier) {
	case 1:
		Person(name, num, id, password);
		break;
	case 2:
		Company(name, num, id, password);
		break;
	default:
		break;
	}

	return;
}

Member::~Member() {
	delete this;
}