#pragma once
#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

using namespace std;

Recruitment* RegisterRecruitment::registerNewRecruitment(string task, int numPeople, string applyDeadline, Company* company, Company** companies, int companiesCount, Member* member)
{
    string businessNum = member->getBusinessNum();
    string companyName = company->getCompanyName(businessNum, companies, companiesCount);

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline);

    return newRecruitment;
}
