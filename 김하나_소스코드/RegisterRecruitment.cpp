#pragma once
#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

using namespace std;

/*
    �Լ� �̸�: RegisterRecruitment::registerNewRecruitment()
    ���: ���ο� recruitment instance(newRecruitment)�� ������; �׷��� ����
    ���� ����: string task, int numPeople, string applyDeadline, Company* company, Company** companies, int companiesCount, Member* member
    ��ȯ��: ������ newRecruitment
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
