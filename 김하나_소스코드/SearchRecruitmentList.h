#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;

class SearchRecruitment {
private:

public:
    Recruitment* searchCompanyRecruitments(string businessNum, Company* company, Recruitment** recruitments);
};