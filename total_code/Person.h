#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Member.h"
#include "ApplicationCollection.h"
using namespace std;

class Person : public Member {
private:
	string id;
	string password;
	string personName;
	string regNum;
	ApplicationCollection* ownedApplicationCollection;
	unordered_map<string, int> applyNumByTask;
public:
	Person(int memClassifier, string id, string password, string personName, string regNum);
	string getPersonName();
	string getRegNum();
	virtual void addNewApplication(Application* application, string task);
	virtual ApplicationCollection* getApplicationCollection();
	virtual void cancelApplication(string businessNum, string task);
	virtual unordered_map<string, int> getStatistics();
};