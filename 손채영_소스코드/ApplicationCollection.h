#pragma once
#include <iostream>
#include <string>
#include "Application.h"
#include "Person.h"
using namespace std;

class ApplicationCollection {
private :
	Person owner; // ?
	Application* ownedApplication[100];
public :
	Application findFirst();
	Application getNext();
	void addApplication(Application* application);
	void removeApplication();
	Application* findApplication(string companyName);
};