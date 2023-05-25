#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Person.h"
#include "Company.h"
#include "Search.h"
#include "SearchUI.h"
#include "Apply.h"
#include "ApplyUI.h"
#include "Recruitment.h"
#include "Application.h"
using namespace std;
class Apply;
/*
	함수 이름 : Apply::apply()
	기능	  : control 클래스로서 지원 기능
	전달 인자 : string businessNum, Company** companies, int companiesCount, Member* loginMember
	반환값    : Application* apply
*/
Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {

	Recruitment* foundRecruitment = nullptr;

	// businessNum을 가진 company 찾기
	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
			companies[i]->updateApplicants(foundRecruitment->getTask());
		}
	}
	// 해당 recruitment의 인원수 + 1
	foundRecruitment->addPerson();

	// recruitment 정보 가져오기
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	// recruitment 정보들로 application 클래스 생성 = 지원
	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	// 로그인된 계정의 지원 리스트에 추가
	loginMember->addNewApplication(newApp, task);

	return newApp;
}