#pragma once

#include <iostream>
#include <string>
#include "Member.h"
#include "ApplicationCollection.h"
using namespace std;

class Person : public Member {
private:
	string personName;
	string regNum;
	ApplicationCollection applicationCollection;
public:
	Person(string personName, string regNum, string id, string password) :Member(id, password) {
		this->personName = personName;
		this->regNum = regNum;
	}
	string getPersonName();
	string getRegNum();
	void listApplications();
	void cancelApplication();
	void deleteApplication();
	Person getPerson();
	void addNewApplication(Application* application);
};