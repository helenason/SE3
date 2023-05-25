#pragma once
#include <iostream>
#include <string>
#include "Search.h"
#include "Recruitment.h"
#include "Company.h"
using namespace std;

/*
	�Լ� �̸� : Search::searchRecruitmentByCompanyName()
	���	  : ���ڷ� ���� companyName�� ���� company�� ä�� ���� ��ȯ
	���� ���� : string companyName, Company** companies, int companiesCount
	��ȯ��    : �ش� ȸ���� ä�� ���� ��ȯ
*/
Recruitment* Search::searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount) {

	// companyName�� ���� company select �� return

	for (int i = 0; i < companiesCount; i++) {
		if (companyName == companies[i]->getCompanyName()) {
			return companies[i]->getRecruitment();
		}
	}
}