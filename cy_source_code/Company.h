#include <iostream>
#include <string>
#include "RecruitmentCollection.h"
#include "Recruitment.h"
#include "Member.h"
using namespace std;

class Company : public Member {
private :
	string companyName;
	int companyNum;
	RecruitmentCollection recruitmentCollection;
public :
	Company(string companyName, int companyNum, string id, string password) :Member(id, password) {
		this->companyName = companyName;
		this->companyNum = companyNum;
	}
	string getCompanyName();
	int getCompanyNum();
	Company getCompany(string companyName);
	RecruitmentCollection listRecruitments();
};