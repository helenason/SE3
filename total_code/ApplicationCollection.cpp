#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

/*
	�Լ� �̸� : ApplicationCollection::addApplication(Application* application)
	���	  : ���� ������ ���� ���� ����Ʈ�� �߰��Ѵ�.
	���� ���� : Application* application
	��ȯ��	  : ����
*/
void ApplicationCollection::addApplication(Application* application) {
	this->ownedApplication[(this->count)++] = application;
}

/*
	�Լ� �̸� : ApplicationCollection::deleteApplication()
	���	  : �ش� ȸ���� ���� ������ �����Ѵ�.
	���� ���� : string businessNum
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
	���	  : ���� ���� ����Ʈ�� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��    : ���� ���� ����Ʈ
*/
Application** ApplicationCollection::getApplications()
{
	return this->ownedApplication;
}

/*
	�Լ� �̸� : ApplicationCollection::getCount()
	���	  : ���� ���� ���� ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��    : ���� ���� ��
*/
int ApplicationCollection::getCount()
{
	return this->count;
}