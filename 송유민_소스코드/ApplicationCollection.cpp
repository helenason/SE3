#pragma once
#include <string>
#include "ApplicationCollection.h"

/*
	�Լ� �̸� : ApplicationCollection::ApplicationCollection()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationCollection::ApplicationCollection()
{
	ownedApplication[0] = new Application();
}

/*
	�Լ� �̸� : ApplicationCollection::deleteApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void ApplicationCollection::deleteApplication(string businessNum)
{
	cout << "before count: " << count << endl;
	for (int i = 0; i < this->count; i++)
	{
		if (ownedApplication[i]->getBusinessNum() == businessNum)
		{
			for (int j = 0; j < this->count - i - 1; j++)
			{
				cout << "before cancel: " << this->ownedApplication[j]->getBusinessNum() << endl;
				this->ownedApplication[j + i] = this->ownedApplication[j + i + 1];
				cout << "before cancel: " << this->ownedApplication[j]->getBusinessNum() << endl;
			}

			break;
		}
	}
	if (count > 0)
	{
		this->count--;
	}

	cout << "after count: " << count << endl;
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