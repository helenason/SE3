#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Company.h"
#include "Member.h"

class RegisterRecruitmentUI {
public:
	void inputDetails(FILE* in_fp, FILE* out_fp, Member* loginMember);
};