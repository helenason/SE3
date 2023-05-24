#pragma once
#include <string>
#include "Person.h"
#include "ApplicationCollection.h"

/*
	�Լ� �̸� : Person::Person()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : Person::listApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
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
	cout << endl << applyNumByTask[task] << endl;
	cout << endl << "Person::cancelApplication�� task: " << task << endl;

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