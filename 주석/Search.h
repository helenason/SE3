#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;
class Recruitment;
/*
* Ŭ���� �̸� : Search
* Ŭ���� ��� : control Ŭ�����μ� �˻� use case ���
*/
class Search {
public:
	Recruitment* searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount);
};