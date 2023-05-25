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
	�Լ� �̸� : Apply::apply()
	���	  : control Ŭ�����μ� ���� ���
	���� ���� : string businessNum, Company** companies, int companiesCount, Member* loginMember
	��ȯ��    : Application* apply
*/
Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {

	Recruitment* foundRecruitment = nullptr;

	// businessNum�� ���� company ã��
	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
			companies[i]->updateApplicants(foundRecruitment->getTask());
		}
	}
	// �ش� recruitment�� �ο��� + 1
	foundRecruitment->addPerson();

	// recruitment ���� ��������
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	// recruitment ������� application Ŭ���� ���� = ����
	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	// �α��ε� ������ ���� ����Ʈ�� �߰�
	loginMember->addNewApplication(newApp, task);

	return newApp;
}