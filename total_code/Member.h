#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Recruitment.h"
#include "Application.h"
#include "ApplicationCollection.h"
using namespace std;

/*
	클래스 이름: Member
	클래스 기능: 회원을 의미하는 클래스로 회원 정보를 저장함
*/
class Member {
private:
	string id;
	string password;
	int memClassifier;
	bool isActivated = false;
	bool isClassifiedAsCompany;

public:
	Member(int memClassifier, string id, string password);
	int getMemClassifier();
	string getId();
	string getPassword();
	virtual string getBusinessNum();
	virtual Recruitment* getRecruitment();
	virtual string getCompanyName();
	virtual void addRecruitment(Recruitment* newRecruitment);
	virtual void addNewApplication(Application* application, string task);
	virtual unordered_map<string, int> getStatistics() = 0;
	virtual void cancelApplication(string businessNum, string task);
	virtual ApplicationCollection* getApplicationCollection();
};