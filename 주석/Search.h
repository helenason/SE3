#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;
class Recruitment;
/*
* 클래스 이름 : Search
* 클래스 기능 : control 클래스로서 검색 use case 담당
*/
class Search {
public:
	Recruitment* searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount);
};