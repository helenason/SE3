#include <iostream>
#include <string>
#include "ApplicationCollection.h"
using namespace std;

Application ApplicationCollection::findFirst() {
	
}
Application ApplicationCollection::getNext() {

}
void ApplicationCollection::addApplication(Application* application) {
	int length = sizeof(ownedApplication) / sizeof(*ownedApplication);
	this->ownedApplication[length] = application;
}
void ApplicationCollection::removeApplication() {

}
Application* ApplicationCollection::findApplication(string companyName) {

}