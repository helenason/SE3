#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"

using namespace std;

/*
    �Լ� �̸�: Recruitment::Recruitment()
    ���: Recruitment Constructor
    ���� ����: string name, string num, string task, int nPeople, string deadline
    ��ȯ��: ����
*/
Recruitment::Recruitment(string name, string num, string task, int nPeople, string deadline, string ID) {
    this->companyName = name;
    this->businessNum = num;
    this->task = task;
    this->numPeople = nPeople;
    this->applyDeadline = deadline;
    this->memberID = ID;
}

/*
    �Լ� �̸�: Recruitment::getRecruitment()
    ���: recruitment ������ ������
    ���� ����: ����
    ��ȯ��: Recruitment�� instance
*/
Recruitment Recruitment::getRecruitment() {
    return Recruitment(this->companyName, this->businessNum, this->task, this->numPeople, this->applyDeadline, this->memberID);
}

/*
    �Լ� �̸�: Recruitment::getCompanyName()
    ���: Recruitment instance�� companyName(ȸ�� �̸�) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� companyName
*/
string Recruitment::getCompanyName() {
    return this->companyName;
}

/*
    �Լ� �̸�: Recruitment::getBusinessNum()
    ���: Recruitment instance�� businessNum(����ڹ�ȣ) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� businessNum
*/
string Recruitment::getBusinessNum() {
    return this->businessNum;
}

/*
    �Լ� �̸�: Recruitment::getTask()
    ���: Recruitment instance�� task(����) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� task
*/
string Recruitment::getTask() {
    return this->task;
}

/*
    �Լ� �̸�: Recruitment::getNumPeople()
    ���: Recruitment instance�� numPeople(���� ���� �ο���) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� numPeople
*/
int Recruitment::getNumPeople() {
    return this->numPeople;
}

/*
    �Լ� �̸�: Recruitment::getNumPeople()
    ���: Recruitment instance�� numPeople(���� ���� �ο���) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� numPeople
*/
string Recruitment::getID() {
    return this->memberID;
}

/*
    �Լ� �̸�: Recruitment::getApplyDeadline()
    ���: Recruitment instance�� applyDeadline(���� ������) ��ȯ
    ���� ����: ����
    ��ȯ��: Recruitment instance�� applyDeadline
*/
string Recruitment::getApplyDeadline() {
    return this->applyDeadline;
}
void Recruitment::addPerson() {
    (this->numPeople)++;
}