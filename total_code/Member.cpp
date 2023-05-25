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
    ���: 
    ���� ����: ����
    ��ȯ��:
*/
string Member::getBusinessNum() { return ""; }
Recruitment* Member::getRecruitment() { return nullptr; }
string Member::getCompanyName() { return ""; }
void Member::addRecruitment(Recruitment* newRecruitment) {}
void Member::addNewApplication(Application* application, string task) {}
/*
    �Լ� �̸� : Member::cancelApplication()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
void Member::cancelApplication(string businessNum, string task)
{

}

/*
    �Լ� �̸� : Member::listApplications()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
ApplicationCollection* Member::getApplicationCollection()
{
    return 0;
}