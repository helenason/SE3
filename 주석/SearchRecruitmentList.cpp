#pragma once
#include <iostream>
#include "SearchRecruitmentList.h"
#include "Recruitment.h"
#include "Member.h"

using namespace std;

/*
    �Լ� �̸�: SearchRecruitmentList::searchComapnyRecruitments()
    ���: ���޹��� ID�� recruitment�� ������ ���� ID�� �����ϸ�, ������ ����� ä�� ����� �޾Ƶ鿩, �ش� ���� ������ ���� ��
    ���� ����: string businessNum, Recruitment* recruitment
    ��ȯ��: recruitment�� getRecruitment() �Լ� ȣ���� ������
*/
Recruitment* SearchRecruitmentList::searchCompanyRecruitments(string ID, Member* member) {

    return member->getRecruitment(); // virtual function �̿�

}