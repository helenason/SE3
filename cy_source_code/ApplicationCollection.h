#pragma once
#include <iostream>
#include <string>
#include "Application.h"
#include "Person.h"
using namespace std;

class ApplicationCollection {
private :
	Application* ownedApplication[100];
	int count = 0; // collection ���� app�� ��
public :
	//Application findFirst();
	//Application getNext();
	void addApplication(Application* application);
	//Application* findApplication(string companyName);
};