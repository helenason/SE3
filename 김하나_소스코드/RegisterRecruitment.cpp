#pragma once
#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

using namespace std;

/*
    함수 이름: RegisterRecruitment::registerNewRecruitment()
    기능: 새로운 recruitment instance(newRecruitment)를 생성함; 그러기 위해
    전달 인자: string name, string num, string task, int nPeople, string deadline
    반환값: 없음
*/
Recruitment* RegisterRecruitment::registerNewRecruitment(string task, int numPeople, string applyDeadline, Company* company, Company** companies, int companiesCount, Member* member)
{
    string businessNum = member->getBusinessNum();
    string companyName = company->getCompanyName(businessNum, companies, companiesCount);

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline);
    company->addRecruitment(newRecruitment);

    return newRecruitment;
}
