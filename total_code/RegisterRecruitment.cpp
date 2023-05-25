#pragma once
#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"

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
    string companyName = member->getCompanyName();

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline, id);
    member->addRecruitment(newRecruitment);

    return newRecruitment;
}
