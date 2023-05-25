#pragma once
#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

Application::Application(string name, string num, string task, int nPeople, string deadline) {
	this->companyName = name;
	this->businessNum = num;
	this->task = task;
	this->numPeople = nPeople;
	this->applyDeadline = deadline;
}
/*
	�Լ� �̸� : Application::getCompanyName()
	���	  : getter �Լ�
	���� ���� : ����
	��ȯ��	  : ���� ������ ȸ�� �̸�
*/
string Application::getCompanyName() {
	return this->companyName;
}
/*
	�Լ� �̸� : Application::getBusinessNum()
	���	  : getter �Լ�
	���� ���� : ����
	��ȯ��	  : ���� ������ ����� ��ȣ
*/
string Application::getBusinessNum() {
	return this->businessNum;
}
/*
	�Լ� �̸� : Application::getTask()
	���	  : getter �Լ�
	���� ���� : ����
	��ȯ��	  : ���� ������ ����
*/
string Application::getTask() {
	return this->task;
}
/*
	�Լ� �̸� : Application::getNumPeople()
	���	  : getter �Լ�
	���� ���� : ����
	��ȯ��	  : ���� ������ �ο���
*/
int Application::getNumPeople() {
	return this->numPeople;
}
/*
	�Լ� �̸� : Application::getApplyDeadline()
	���	  : getter �Լ�
	���� ���� : ����
	��ȯ��	  : ���� ������ ������
*/
string Application::getApplyDeadline() {
	return this->applyDeadline;
}