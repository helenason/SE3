#pragma once
#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

class ApplicationCollection {
private:
	Application* ownedApplication[100];
	int count = 0;
public:
	ApplicationCollection();
	Application** getApplications();
	void addApplication(Application* application);
	void deleteApplication(string buisnessNum);
	int getCount();
};