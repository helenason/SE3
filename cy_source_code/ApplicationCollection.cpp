#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

void ApplicationCollection::addApplication(Application* application) { // collection�� application �߰�
	int length = this->count;
	this->ownedApplication[length] = application;
	(this->count)++;
}