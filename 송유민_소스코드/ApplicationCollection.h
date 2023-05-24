#pragma once
#include <iostream>
#include <string>
#include "Application.h"

using namespace std;


/*
	클래스 이름 :ApplicationCollection
	기능	  :
*/
class ApplicationCollection
{
private:
	Application* ownedApplication[100];
	int count = 0;
public:
	ApplicationCollection();
	void deleteApplication(string buisnessNum);
	Application** getApplications();
	int getCount();
};