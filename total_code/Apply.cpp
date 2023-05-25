#pragma once
#include <iostream>
#include <string>
#include "Apply.h"
#include "Application.h"
#include "Company.h"
#include "Member.h"
#include "Recruitment.h"

using namespace std;
/*
	함수 이름 : Apply::apply()
	기능	  : 지원 (사업자 번호를 통해 해당 채용 정보를 찾은 후 새로운 지원 정보 생성)
	전달 인자 : string businessNum, Company** companies, int companiesCount, Member* loginMember
	반환값    : 새롭게 생성된 application 정보
*/
Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {

	Recruitment* foundRecruitment = nullptr;

	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
			companies[i]->updateApplicants(foundRecruitment->getTask());
		}
	}
	
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	loginMember->addNewApplication(newApp, task);

	return newApp;
}