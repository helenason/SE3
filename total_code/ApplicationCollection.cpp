#pragma once
#include <iostream>
#include <string>
#include "Application.h"
#include "ApplicationCollection.h"
using namespace std;
/*
	함수 이름 : ApplicationCollection::addApplication(Application* application)
	기능	  : getter 함수
	전달 인자 : Application* application
	반환값	  : 없음
*/
void ApplicationCollection::addApplication(Application* application) { // collection에 application 추가
	this->ownedApplication[(this->count)++] = application;
}