#include <iostream>
#include <string>
#include "Search.h"
using namespace std;

Recruitment* Search::searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount) {

	// companyName을 가진 company select 후 return

	for (int i = 0; i < companiesCount; i++) {
		if (companyName == companies[i]->getCompanyName()) {
			return companies[i]->getRecruitment();
		}
	}
}