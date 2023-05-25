#pragma once
#include <iostream>
#include "SearchRecruitmentList.h"
#include "Recruitment.h"

using namespace std;

Recruitment* SearchRecruitmentList::searchCompanyRecruitments(string businessNum, Recruitment* recruitment) {

	if (businessNum == recruitment->getBusinessNum()) {
			return &(recruitment->getRecruitment());
	}
}