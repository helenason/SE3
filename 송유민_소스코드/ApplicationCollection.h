#pragma once
#include <iostream>
#include <string>
#include "Application.h"

using namespace std;


/*
	Ŭ���� �̸� :ApplicationCollection
	���	  :
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