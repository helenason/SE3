#pragma once
#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

/*
	클래스 이름: ApplicationCollection
	기능: 지원 정보를 모아놓은 컬렉션 클래스이다. 지원 정보 수도 가지고 있다.
*/
class ApplicationCollection {
private:
	Application* ownedApplication[100];
	int count = 0;
public:
	Application** getApplications();
	void addApplication(Application* application);
	void deleteApplication(string buisnessNum);
	int getCount();
};