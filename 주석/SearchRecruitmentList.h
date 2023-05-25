#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class Recruitment;

class SearchRecruitmentList {
private:

public:
    Recruitment* searchCompanyRecruitments(string ID, Member* member);
};