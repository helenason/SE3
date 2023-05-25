#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "ApplicationCollection.h"
using namespace std;
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��	  :
*/
Person::Person(string id, string password, string personName, string regNum) :Member(id, password) {
	this->id = id;
	this->password = password;
	this->personName = personName;
	this->regNum = regNum;
	this->ownedApplicationCollection = new ApplicationCollection();
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��	  :
*/
string Person::getPersonName() {
	return this->personName;
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��	  :
*/
string Person::getRegNum() {
	return this->regNum;
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��	  :
*/
void Person::addNewApplication(Application* application, string task) {
	this->ownedApplicationCollection->addApplication(application);
	this->applyNumByTask[task] += 1;
}