#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;
class Recruitment;

class Search {
public:
	Recruitment* searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount);
};