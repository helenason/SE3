#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Recruitment.h"

using namespace std;

/*
    �Լ� �̸�: Member::Member()
    ���: Member Constructor
    ���� ����: string id, string password
    ��ȯ��: ����
*/
Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
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
    ���: member�� businessNum ��ȯ
    ���� ����: ����
    ��ȯ��: businessNum
*/
string Member::getBusinessNum() {
    return this->businessNum;
}

Recruitment* Member::getRecruitment() { return nullptr; }
string Member::getCompanyName() { return ""; }
void Member::addRecruitment(Recruitment* newRecruitment) {}