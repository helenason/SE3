#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "ApplicationCollection.h"
using namespace std;
/*
	함수 이름 :
	기능	  :
	전달 인자 :
	반환값	  :
*/
Person::Person(string id, string password, string personName, string regNum) :Member(id, password) {
	this->id = id;
	this->password = password;
	this->personName = personName;
	this->regNum = regNum;
	this->ownedApplicationCollection = new ApplicationCollection();
}
/*
	함수 이름 :
	기능	  :
	전달 인자 :
	반환값	  :
*/
string Person::getPersonName() {
	return this->personName;
}
/*
	함수 이름 :
	기능	  :
	전달 인자 :
	반환값	  :
*/
string Person::getRegNum() {
	return this->regNum;
}
/*
	함수 이름 :
	기능	  :
	전달 인자 :
	반환값	  :
*/
void Person::addNewApplication(Application* application, string task) {
	this->ownedApplicationCollection->addApplication(application);
	this->applyNumByTask[task] += 1;
}