#pragma once

#include <iostream>
#include <string>
using namespace std;

class Recruitment {
private:
	string companyName;
	int companyNum; // 추가
	string task;
	int numPeople;
	string applyDeadline;

public:
	Recruitment(string name, int num, string task, int nPeople, string deadline) {
		//
	}
	string getCompanyName();
	int getCompanyNum();
	string getTask();
	int getNumPeople();
	string getApplyDeadline();
	// Recruitment selectRecruitmentByCompanyName(string companyName); // ByTask는 삭제 & return type 미정 & 1개만 검색되므로 s 삭제
	Recruitment getRecruitment();
	void addPerson();
};