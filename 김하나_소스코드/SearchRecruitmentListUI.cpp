#include <stdio.h>
#include "SearchRecruitmentListUI.h"
#include "SearchRecruitmentList.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

void SearchRecruitmentListUI::searchRecruitment(Member* loginMember) {

    char businessNum = loginMember->getBusinessNum();

	SearchRecruitmentList* searchList;
	Recruitment* searchedRecruitment;

	searchedRecruitment = searchList->searchCompanyRecruitments(businessNum, companies, companiesCount);
    
	const char* task = (searchedRecruitment->getTask()).c_str();
	int nPeople = searchedRecruitment->getNumPeople();
	const char* deadline = (searchedRecruitment->getApplyDeadline()).c_str();

	fprintf(out_fp, "3.2 등록된 채용 정보 조회\n");
	fprintf(out_fp, "%s %d %s\n", task, nPeople, deadline);

}