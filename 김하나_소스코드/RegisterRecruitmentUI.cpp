#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "RegisterRecruitmentUI.h"
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

/*
    �Լ� �̸�: RegisterRecruitmentUI::inputDetails()
    ���: input file�κ��� ����, �ο� ��, ��û�������� �Է¹޾�, �̸� ���ο� Recruitment�� ����� ���� ���;
         ���ο� recruitment ���� ��, �ش� ä������� ����, �ο� ��, ��û�������� �����
    ���� ����: FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember
    ��ȯ��: ����
*/
void RegisterRecruitmentUI::inputDetails(FILE* in_fp, FILE* out_fp, Member* loginMember)
{
<<<<<<< HEAD
    char newTask[32];
    //char newNumPeople = '0';
    int newNumPeople = 0;
    char newDeadline[32];

    fscanf(in_fp, "%s %d %s", newTask, &newNumPeople, newDeadline);
=======
    Company* company;
    char newTask[32];
    int newNumPeople;
    char newDeadline[32];

    fscanf(in_fp, "%s %d %s", newTask, newNumPeople, newDeadline);
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5

    RegisterRecruitment registerRecruitment;
    Recruitment* newRecruitment;

<<<<<<< HEAD
    newRecruitment = registerRecruitment.registerNewRecruitment(newTask, newNumPeople, newDeadline, loginMember);

    fprintf(out_fp, "3.1. ä�� ���� ���\n");
    fprintf(out_fp, "> %s %d %s\n", newTask, newNumPeople, newDeadline);
=======
    newRecruitment = registerRecruitment.registerNewRecruitment(newTask, newNumPeople, newDeadline, company, companies, companiesCount, loginMember);
    
    fprintf(out_fp, "3.1. 채용 정보 등록\n");
    fprintf(out_fp, "%s %d %s\n", newTask, newNumPeople, newDeadline);
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5
}