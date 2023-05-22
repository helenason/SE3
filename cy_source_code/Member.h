#pragma once

#include <iostream>
#include <string>
using namespace std;

class Member {
private :
	string id;
	string password;
	bool isActivated = false;
	bool isClassifiedAsCompany;
	void setActivated();

public :
	Member(string id, string password);
	string getId();
	string getPassword();
	void createNewMember();
	void deleteMember();
	Member getMember();
	void activateMember();
	void deactivateMember();
	void getMemberClassifier();
};