#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Company.h"

using namespace std;

class RegisterRecruitment {
private:

public:
    Recruitment* registerNewRecruitment(string task, int numPeople, string applyDeadline, Company* company, Company** companies, int companiesCount, Member* member);
};