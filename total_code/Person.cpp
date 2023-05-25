#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Person.h"
using namespace std;
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��	  :
*/
Person::Person(int memClassifier, string personName, string regNum, string id, string password) :Member(memClassifier, id, password) {
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
ApplicationCollection* Person::getApplicationCollection()
{
	return ownedApplicationCollection;
}

/*
	�Լ� �̸� : Person::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : Person::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
}