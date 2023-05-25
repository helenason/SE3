#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;

class SearchRecruitmentList {
private:

public:
    Recruitment searchCompanyRecruitments(string businessNum, Recruitment* recruitment);
};