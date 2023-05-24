#pragma once

#include <iostream>
#include <string>
using namespace std;

class Member {
private :
//protected:
	string id;
	string password;
	bool isActivated = false;
	bool isClassifiedAsCompany;
	// void setActivated();

public :
	Member(string id, string password);
	string getId();
	string getPassword();
};