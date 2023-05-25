#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Person.h"
using namespace std;

/*
	�Լ� �̸� : Person::Person()
	���	  : �����ڷ� ��� �������� �ʱ�ȭ�Ѵ�.
	���� ���� : int memClassifier, string personName, string regNum, string id, string password
	��ȯ��	  : ����
*/
Person::Person(int memClassifier, string personName, string regNum, string id, string password) :Member(memClassifier, id, password) {
	this->id = id;
	this->password = password;
	this->personName = personName;
	this->regNum = regNum;
	this->ownedApplicationCollection = new ApplicationCollection();
}

/*
	�Լ� �̸� : Person::getPersonName()
	���	  : ȸ���� �̸��� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��	  : ȸ���� �̸�
*/
string Person::getPersonName() {
	return this->personName;
}

/*
	�Լ� �̸� : Person::getRegNum()
	���	  : ȸ���� �ֹε�Ϲ�ȣ�� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��	  : ȸ���� �ֹε�Ϲ�ȣ
*/
string Person::getRegNum() {
	return this->regNum;
}

/*
	�Լ� �̸� : Person::addNewApplication
	���	  : ȸ���� ���� ���� �߰�
	���� ���� : Application* application, string task
	��ȯ��	  : ����
*/
void Person::addNewApplication(Application* application, string task) {
	this->ownedApplicationCollection->addApplication(application);
	this->applyNumByTask[task] += 1;
}

/*
	�Լ� �̸� : Person::getApplicationCollection
	���	  : ȸ���� ���� ���� �÷����� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��	  : ȸ���� ���� ���� �÷���
*/
ApplicationCollection* Person::getApplicationCollection()
{
	return ownedApplicationCollection;
}

/*
	�Լ� �̸� : Person::cancelApplication()
	���	  : �ش� ȸ���� ��� ����ϴ� ���� ������ ����Ѵ�.
	���� ���� : string businessNum, string task
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
	���	  : ȸ���� ���� ���� ��踦 ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��    : ȸ���� ������ ���� Ƚ��
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
}