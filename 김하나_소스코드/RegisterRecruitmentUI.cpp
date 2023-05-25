#pragma once
#include <stdio.h>
#include "RegisterRecruitmentUI.h"
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

void RegisterRecruitmentUI::inputDetails(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember)
{
    Company* company;
    string newTask;
    int newNumPeople;
    string newDeadline;

    fscanf(in_fp, "%s %d %s", newTask, newNumPeople, newDeadline);

    RegisterRecruitment registerRecruitment;
    Recruitment* newRecruitment;

    newRecruitment = registerRecruitment.registerNewRecruitment(newTask, newNumPeople, newDeadline, company, companies, companiesCount, loginMember);

    fprintf(out_fp, "3.1. 채용 정보 등록\n");
    fprintf(out_fp, "%s %d %s\n", newTask, newNumPeople, newDeadline);
}