#pragma once
#include "Apply.h"

class ApplyUI {
private:
	Apply* apply;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember);
};