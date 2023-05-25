#pragma once
#include <iostream>
#include "Company.h"
#include "Recruitment.h"

using namespace std;

Company::Company(string id, string password, string companyName, string businessNum) : Member(id, password) {
    this->id = id;
    this->password = password;
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->ownedRecruitment = new Recruitment("reName", "reNum", "reTask", 100, "reDeadline", "reId"); // test case !!
}

Recruitment* Company::getRecruitment() {
    return this->ownedRecruitment;
}

string Company::getBusinessNum() {
    return this->businessNum;
}

/*
    �Լ� �̸�: Company::getCompanyName()
    ���: ���� ������ businessNum(����ڹ�ȣ)�� companies�� getBusinessNum()�� �̿��Ͽ� ��ȯ���� ����ڹ�ȣ�� �����ϸ�, companyName�� ��ȯ��
    ���� ����: string businessNum, Company** companies, int companiesCount
    ��ȯ��: companyName
*/
string Company::getCompanyName() {
    return this->companyName;
}

/*
    �Լ� �̸�: Company::addRecruitment()
    ���: ���� ������ recruitment�� ownedRecruitment�� �����Ͽ�, ���ο� recruitment�� company�� �߰���;
         ����, company�� recruitment ���� �� �� �ֵ���, �߰��� ��, numRecruitments�� ������Ŵ
    ���� ����: Recruitment* recruitment
    ��ȯ��: ����
*/
void Company::addRecruitment(Recruitment* newRecruitment) {
    this->ownedRecruitment = newRecruitment;
}
void Company::updateApplicants(string task) {
    this->applicantsNumByTask[task] += 1;
}