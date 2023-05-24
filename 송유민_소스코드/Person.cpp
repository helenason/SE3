#pragma once
#include <string>
#include "Person.h"
#include "ApplicationCollection.h"

/*
	함수 이름 : Person::Person()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Person::Person()
{
	this->ownedApplicationCollection = new ApplicationCollection();
	char task[32] = "task";
	char zero[32] = "zero";
	const char* charPointer = "charPointer";

	//string stringTask(task);
	//string stringZero(zero);

	this->applyNumByTask[zero] = 0;
	this->applyNumByTask[task] = 1;
	this->applyNumByTask[charPointer] = 8;
}
/*
	함수 이름 : Person::listApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
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
	cout << endl << applyNumByTask[task] << endl;
	cout << endl << "Person::cancelApplication의 task: " << task << endl;

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