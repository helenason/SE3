#pragma once
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class ApplicationCollection;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Member
{
private:

public:
	virtual unordered_map<string, int> getStatistics() = 0;
	virtual void cancelApplication(string businessNum, string task);
	virtual ApplicationCollection* getApplicationCollection();

};