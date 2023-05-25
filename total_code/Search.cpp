#pragma once
#include <iostream>
#include <string>
#include "Search.h"
#include "Recruitment.h"
#include "Company.h"
using namespace std;

/*
	함수 이름 : Search::searchRecruitmentByCompanyName()
	기능	  : 인자로 받은 companyName을 가진 company의 채용 정보 반환
	전달 인자 : string companyName, Company** companies, int companiesCount
	반환값    : 해당 회사의 채용 정보 반환
*/
Recruitment* Search::searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount) {

	// companyName을 가진 company select 후 return

	for (int i = 0; i < companiesCount; i++) {
		if (companyName == companies[i]->getCompanyName()) {
			return companies[i]->getRecruitment();
		}
	}
}