#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "RegisterRecruitmentUI.h"
#include "Member.h"
#include "RegisterRecruitment.h"

/*
    �Լ� �̸�: RegisterRecruitmentUI::inputDetails()
    ���: input file�κ��� ����, �ο� ��, ��û�������� �Է¹޾�, �̸� ���ο� Recruitment�� ����� ���� ���;
         ���ο� recruitment ���� ��, �ش� ä������� ����, �ο� ��, ��û�������� �����
    ���� ����: FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember
    ��ȯ��: ����
*/
void RegisterRecruitmentUI::inputDetails(FILE* in_fp, FILE* out_fp, Member* loginMember)
{
    char newTask[32];
    int newNumPeople = 0;
    char newDeadline[32];

    fscanf(in_fp, "%s %d %s", newTask, &newNumPeople, newDeadline);

    RegisterRecruitment registerRecruitment;
    Recruitment* newRecruitment;


    newRecruitment = registerRecruitment.registerNewRecruitment(newTask, newNumPeople, newDeadline, loginMember);

    fprintf(out_fp, "3.1. ä�� ���� ���\n");
    fprintf(out_fp, "> %s %d %s\n\n", newTask, newNumPeople, newDeadline);
}