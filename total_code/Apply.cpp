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
	??? ??? : Apply::apply()
	???	  : control ??????¥ì? ???? ???
	???? ???? : string businessNum, Company** companies, int companiesCount, Member* loginMember
	?????    : Application* apply
*/
Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {

	Recruitment* foundRecruitment = nullptr;

	// businessNum?? ???? company ???
	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
			companies[i]->updateApplicants(foundRecruitment->getTask());
		}
	}
	
	// recruitment ???? ????????
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	// recruitment ??????? application ????? ???? = ????
	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	// ?¥á??¥å? ?????? ???? ??????? ???
	loginMember->addNewApplication(newApp, task);

	return newApp;
}