#pragma once
#include "Company.h"
#include "Member.h"

class RegisterRecruitmentUI {
public :
	void inputDetails(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember);
};