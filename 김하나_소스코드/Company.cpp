#pragma once
#include <iostream>
#include "Company.h"

using namespace std;

Company::Company() {}

string Company::getBusinessNum() {
    return this->businessNum;
}

string Company::getCompanyName(string businessNum, Company** companies, int companiesCount) {

    for (int i = 0; i < companiesCount; i++) {
        if (businessNum == companies[i]->getBusinessNum()) {
            return companies[i]->companyName;
            break;
        }
    }
}

void Company::addRecruitment(Company* company) {
    company->numRecruitments++;
}

int Company::getRecruitmentsNum() {
    return this->numRecruitments;
}