#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Member.h"
#include "Application.h"
#include "ApplicationCollection.h"
using namespace std;
class ApplicationCollection;

class Person : public Member {
private:
	string id;
	string password;
	string personName;
	string regNum;
	ApplicationCollection* ownedApplicationCollection;
	unordered_map<string, int> applyNumByTask;
public:
	Person(string id, string password, string personName, string regNum);
	string getPersonName();
	string getRegNum();
	virtual void addNewApplication(Application* application, string task);
};