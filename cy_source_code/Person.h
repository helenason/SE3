#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Application.h"
#include "ApplicationCollection.h"
using namespace std;

class Person : public Member {
private:
	string id;
	string password;
	string personName;
	string regNum;
	ApplicationCollection* ownedApplicationCollection;
public:
	Person(string id, string password, string personName, string regNum) :Member(id, password) {
		this->id = id;
		this->password = password;
		this->personName = personName;
		this->regNum = regNum;
	}
	string getPersonName();
	string getRegNum();
	void addNewApplication(Application* application);
};