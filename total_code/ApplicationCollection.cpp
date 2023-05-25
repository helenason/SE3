#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;
/*
	함수 이름 : ApplicationCollection::ApplicationCollection()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ApplicationCollection::ApplicationCollection()
{
	
}
/*
	함수 이름 : ApplicationCollection::addApplication(Application* application)
	기능	  : getter 함수
	전달 인자 : Application* application
	반환값	  : 없음
*/
void ApplicationCollection::addApplication(Application* application) { // collection에 application 추가
	this->ownedApplication[(this->count)++] = application;
}
/*
	함수 이름 : ApplicationCollection::deleteApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
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