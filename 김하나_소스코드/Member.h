#pragma once
#include <iostream>
#include <string>

using namespace std;

class Member {
private :
	string id;
	string password;
	string businessNum;
	bool isActivated = false;
	bool isClassifiedAsCompany;

public :
	Member(string id, string password);
	string getId();
	string getPassword();
	string getBusinessNum();
	virtual Recruitment* getRecruitment();
};