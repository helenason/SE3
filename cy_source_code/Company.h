#include <iostream>
#include <string>
#include "Member.h"
#include "Recruitment.h"
using namespace std;

class Company : public Member {
private :
	string id;
	string password;
	string companyName;
	string businessNum;
	Recruitment* ownedRecruitment;
public :
	Company(string companyName, string businessNum, string id, string password) :Member(id, password) {
		this->companyName = companyName;
		this->businessNum = businessNum;
	}
	string getCompanyName();
	string getBusinessNum();
	Company getCompany(string companyName);
	Recruitment* getRecruitment();
};