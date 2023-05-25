#pragma once
#include <iostream>
#include "SearchRecruitmentList.h"
#include "Recruitment.h"
#include "Company.h"

using namespace std;

Recruitment* SearchRecruitmentList::searchCompanyRecruitments(string businessNum, Company* company, Recruitment** recruitments) {

	int recruitmentsCount = company->getRecruitmentsNum();

    for (int i = 0; i < recruitmentsCount; i++) {
		if (businessNum == recruitments[i]->getBusinessNum()) {
			return recruitments[i]->getRecruitment();
		}
	}
}