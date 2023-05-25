#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
	클래스 이름: Recruitment
	클래스 기능: 채용 정보 등록할 때 생성되는 과정, 지원을 취소할 때와 같이 recruitment를 삭제하는 일도 담당
*/
class Recruitment {
private:
	string companyName;
	string businessNum;
	string task;
	int numPeople;
	string memberID;
	string applyDeadline;
	int applicantsNum = 0;

public:
	Recruitment(string name, string num, string task, int nPeople, string deadline, string ID);
	Recruitment getRecruitment();
	string getCompanyName();
	string getBusinessNum();
	string getTask();
	string getID();
	int getNumPeople();
	string getApplyDeadline();
	void removePerson();
};