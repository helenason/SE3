#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Member.h"

using namespace std;

class SearchRecruitmentList {
private:

public:
    Recruitment* searchCompanyRecruitments(string ID,  Member* member);
};