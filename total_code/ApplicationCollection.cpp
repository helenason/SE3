#pragma once
#include <iostream>
#include <string>
#include "Application.h"
#include "ApplicationCollection.h"
using namespace std;
/*
	�Լ� �̸� : ApplicationCollection::addApplication(Application* application)
	���	  : getter �Լ�
	���� ���� : Application* application
	��ȯ��	  : ����
*/
void ApplicationCollection::addApplication(Application* application) { // collection�� application �߰�
	this->ownedApplication[(this->count)++] = application;
}