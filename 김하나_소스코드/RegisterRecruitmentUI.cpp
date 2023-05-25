#include <stdio.h>
#include "RegisterRecruitmentUI.h"
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

void RegisterRecruitmentUI::inputDetails(FILE* in_fp, FILE* out_fp, Company** companies, Member* loginMember)
{
    string newTask[32];
    int newNumPeople;
    string newDeadline[32];

    fscanf(in_fp, "%s %d %s", newTask, newNumPeople, newDeadline);

    RegisterRecruitment* register;
    Recruitment* newRecruitment;

    newRecruitment = register->registerNewRecruitment(newTask, newNumPeople, newDeadline);

    fprintf(out_fp, "3.1 채용 정보 등록\n");
    fprintf(out_fp, "%s %d %s\n", newTask, newNumPeople, newDeadline);
}