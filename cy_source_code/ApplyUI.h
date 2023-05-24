#pragma once
#include "Company.h"
class ApplyUI {
public :
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember);
};