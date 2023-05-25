#pragma once
#include <iostream>
#include "Company.h"
#include "Recruitment.h"

using namespace std;

Company::Company(int numRecruitments, string companyName, string businessNum, string id, string password) : Member(id, password) {
    this->numRecruitments = numRecruitments;
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->id = id;
    this->password = password;
    this->ownedRecruitment = new Recruitment("a", "a", "a", 1, "A", "a");
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
/*
    �Լ� �̸�: Company::getRecruitmentsNum()
    ���: �� company�� �����ִ� recruitment�� ���� ��ȯ
    ���� ����: ����
    ��ȯ��: numRecruitments
*/
int Company::getRecruitmentsNum() {
    return this->numRecruitments;
}
void Company::addRecruitment(Recruitment* newRecruitment) {
    this->ownedRecruitment = newRecruitment;
}