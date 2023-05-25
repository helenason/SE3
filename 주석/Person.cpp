#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Person.h"
using namespace std;
/*
	함수 이름 :
	기능	  :
	전달 인자 :
	반환값	  :
*/
Person::Person(int memClassifier, string personName, string regNum, string id, string password) :Member(memClassifier, id, password) {
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
ApplicationCollection* Person::getApplicationCollection()
{
	return ownedApplicationCollection;
}

/*
	함수 이름 : Person::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Person::cancelApplication(string businessNum, string task)
{
	if (applyNumByTask[task] > 0)
	{
		applyNumByTask[task] -= 1;
	}

	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	함수 이름 : Person::getStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
}