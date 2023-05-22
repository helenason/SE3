#pragma once

#include <iostream>
#include <string>
using namespace std;

class Recruitment {
private:
	string companyName;
	int companyNum; // �߰�
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
	// Recruitment selectRecruitmentByCompanyName(string companyName); // ByTask�� ���� & return type ���� & 1���� �˻��ǹǷ� s ����
	Recruitment getRecruitment();
	void addPerson();
};