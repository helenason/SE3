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
    전달 인자: string task, int numPeople, string applyDeadline, Company* company, Company** companies, int companiesCount, Member* member
    반환값: 생성된 newRecruitment
*/
Recruitment* RegisterRecruitment::registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member)
{
    string businessNum = member->getBusinessNum();
    string id = member->getId();
<<<<<<< HEAD
    string companyName = member->getCompanyName();

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline, id);
    member->addRecruitment(newRecruitment);
=======
    string companyName = company->getCompanyName(businessNum, companies, companiesCount);

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline, id);
    company->addRecruitment(newRecruitment);
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5

    return newRecruitment;
}
