#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Company.h"
using namespace std;

class Search {
public:
	Recruitment* searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount);
};