#pragma once
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class ApplicationCollection;

/*
	클래스 이름 :
	기능	  :
*/
class Member
{
private:

public:
	virtual unordered_map<string, int> getStatistics() = 0;
	virtual void cancelApplication(string businessNum, string task);
	virtual ApplicationCollection* getApplicationCollection();

};