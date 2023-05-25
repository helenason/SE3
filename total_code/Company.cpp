#pragma once
#include <iostream>
#include <unordered_map>
#include "Company.h"

using namespace std;

/*
    �Լ� �̸� : Company::Company()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
Company::Company(int memClassifier, string companyName, string businessNum, string id, string password) : Member(memClassifier, id, password) {
    this->id = id;
    this->password = password;
    this->companyName = companyName;
    this->businessNum = businessNum;
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
/*
    �Լ� �̸� : Company::getStatistics()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
unordered_map<string, int> Company::getStatistics()
{
    return applicantsNumByTask;
}

/*
    �Լ� �̸� : Company::subtractApplicantsNumByTask()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
void Company::subtractApplicantsNumByTask(string task)
{
    if (applicantsNumByTask[task] > 0)
    {
        applicantsNumByTask[task] -= 1;
    }
}