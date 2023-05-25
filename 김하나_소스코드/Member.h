#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;
class Recruitment;

<<<<<<< HEAD
class Member {
private:
=======
class Member : public Member {
private :
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5
	string id;
	string password;
	string businessNum;
	bool isActivated = false;
	bool isClassifiedAsCompany;

public:
	Member(string id, string password);
	string getId();
	string getPassword();
	string getBusinessNum();
	virtual Recruitment* getRecruitment();
	virtual string getCompanyName();
	virtual void addRecruitment(Recruitment* newRecruitment);
};