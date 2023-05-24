#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Member.h"

using namespace std;

class ApplicationCollection;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Person :public Member
{
private:
	unordered_map<string, int> applyNumByTask;
	ApplicationCollection* ownedApplicationCollection;
public:
	Person();
	virtual ApplicationCollection* getApplicationCollection();
	virtual void cancelApplication(string businessNum, string task);
	virtual unordered_map<string, int> getStatistics();
};