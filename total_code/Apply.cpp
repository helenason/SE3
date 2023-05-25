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