#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;
/*
	�Լ� �̸� : ApplicationCollection::ApplicationCollection()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationCollection::ApplicationCollection()
{
	
}
/*
	�Լ� �̸� : ApplicationCollection::addApplication(Application* application)
	���	  : getter �Լ�
	���� ���� : Application* application
	��ȯ��	  : ����
*/
void ApplicationCollection::addApplication(Application* application) { // collection�� application �߰�
	this->ownedApplication[(this->count)++] = application;
}
/*
	�Լ� �̸� : ApplicationCollection::deleteApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void ApplicationCollection::deleteApplication(string businessNum)
{
	
	for (int i = 0; i < this->count; i++)
	{
		if (ownedApplication[i]->getBusinessNum() == businessNum)
		{
			for (int j = 0; j < this->count - i - 1; j++)
			{
				this->ownedApplication[j + i] = this->ownedApplication[j + i + 1];
			}

			break;
		}
	}
	if (count > 0)
	{
		this->count--;
	}

}
/*
	�Լ� �̸� : ApplicationCollection::getApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Application** ApplicationCollection::getApplications()
{
	return this->ownedApplication;
}
/*
	�Լ� �̸� : ApplicationCollection::getCount()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
int ApplicationCollection::getCount()
{
	return this->count;
}