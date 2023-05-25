#pragma once
#include <iostream>
#include <string>
#include "Application.h"
#include "Person.h"
using namespace std;
class Application;

class ApplicationCollection {
private:
	Application* ownedApplication[100];
	int count = 0;
public:
	void addApplication(Application* application);
};