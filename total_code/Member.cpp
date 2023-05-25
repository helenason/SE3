#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

/*
    �Լ� �̸�: Member::Member()
    ���: Member Constructor
    ���� ����: string id, string password
    ��ȯ��: ����
*/
Member::Member(int memClassifier, string id, string password) {
    this->memClassifier = memClassifier;
    this->id = id;
    this->password = password;
}
int Member::getMemClassifier()
{
    return this->memClassifier;
}

/*
    �Լ� �̸�: Member::getId()
    ���: member�� id ��ȯ
    ���� ����: ����
    ��ȯ��: id
*/
string Member::getId() {
    return this->id;
}

/*
    �Լ� �̸�: Member::getPassword()
    ���: member�� password ��ȯ
    ���� ����: ����
    ��ȯ��: password
*/
string Member::getPassword() {
    return this->password;
}

/*
    �Լ� �̸�: Member::getBusinessNum()
    ���: ���� �Լ�
    ���� ����: ����
    ��ȯ��: �� ���ڿ�
*/
string Member::getBusinessNum() { return ""; }

/*
    �Լ� �̸�: Member::getRecruitment()
    ���: ���� �Լ�
    ���� ����: ����
    ��ȯ��: null pointer
*/
Recruitment* Member::getRecruitment() { return nullptr; }

/*
    �Լ� �̸�: Member::getCompanyName()
    ���: ���� �Լ�
    ���� ����: ����
    ��ȯ��: �� ���ڿ�
*/
string Member::getCompanyName() { return ""; }

/*
    �Լ� �̸�: Member::addRecruitment()
    ���: ���� �Լ�
    ���� ����: Recruitment* newRecruitment
    ��ȯ��: ����
*/
void Member::addRecruitment(Recruitment* newRecruitment) {}

/*
    �Լ� �̸�:  Member::addNewApplication
    ���: ���� �Լ�
    ���� ����: Application* application, string task
    ��ȯ��: ����
*/
void Member::addNewApplication(Application* application, string task) {}

/*
    �Լ� �̸� : Member::cancelApplication()
    ���	  : ���� �Լ�
    ���� ���� : string businessNum, string task
    ��ȯ��    : ����
*/
void Member::cancelApplication(string businessNum, string task)
{

}

/*
    �Լ� �̸� : Member::listApplications()
    ���	  : ���� �Լ�
    ���� ���� : ����
    ��ȯ��    : 0
*/
ApplicationCollection* Member::getApplicationCollection()
{
    return 0;
}