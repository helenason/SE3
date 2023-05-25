#pragma once
#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

/*
	함수 이름 : ApplicationCollection::addApplication(Application* application)
	기능	  : 지원 정보를 지원 정보 리스트에 추가한다.
	전달 인자 : Application* application
	반환값	  : 없음
*/
void ApplicationCollection::addApplication(Application* application) {
	this->ownedApplication[(this->count)++] = application;
}

/*
	함수 이름 : ApplicationCollection::deleteApplication()
	기능	  : 해당 회원의 지원 정보를 삭제한다.
	전달 인자 : string businessNum
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
	기능	  : 지원 정보 리스트를 반환한다.
	전달 인자 : 없음
	반환값    : 지원 정보 리스트
*/
Application** ApplicationCollection::getApplications()
{
	return this->ownedApplication;
}

/*
	함수 이름 : ApplicationCollection::getCount()
	기능	  : 지원 정보 수를 반환한다.
	전달 인자 : 없음
	반환값    : 지원 정보 수
*/
int ApplicationCollection::getCount()
{
	return this->count;
}