#pragma once
#include <string>
#include "ApplicationCollection.h"

/*
	함수 이름 : ApplicationCollection::ApplicationCollection()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ApplicationCollection::ApplicationCollection()
{
	ownedApplication[0] = new Application();
}

/*
	함수 이름 : ApplicationCollection::deleteApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
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
	함수 이름 : ApplicationCollection::getApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Application** ApplicationCollection::getApplications()
{
	return this->ownedApplication;
}

/*
	함수 이름 : ApplicationCollection::getCount()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
int ApplicationCollection::getCount()
{
	return this->count;
}