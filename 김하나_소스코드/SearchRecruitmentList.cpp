#include <iostream>
#include "SearchRecruitmentList.h"
#include "Recruitment.h"

using namespace std;

Recruitment* SearchRecruitmentList::searchCompanyRecruitments(string businessNum, Recruitment** recruitments, int recruitmentsCount) {

    for (int i = 0; i < recruitmentsCount; i++) {
		if (businessNum == recruitments[i]->getBusinessNum()) {
			return recruitments[i]->getRecruitment();
		}
	}
}
