#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Company.h"
using namespace std;

class RecruitmentCollection {
private :
	Recruitment* ownedRecruitment[100];
public:
	Recruitment findFirst();
	Recruitment getNext();
	void addRecruitment();
	void removeRecruitment();
	Recruitment* findRecruitment(string companyName);
	Recruitment* findRecruitment(int companyNum);
};