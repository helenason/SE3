#pragma once
#include <stdio.h>
#include "RegisterRecruitmentUI.h"
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

/*
    함수 이름: RegisterRecruitmentUI::inputDetails()
    기능: input file로부터 업무, 인원 수, 신청마감일을 입력받아, 이를 새로운 Recruitment를 만드는 데에 사용;
         새로운 recruitment 생성 후, 해당 채용공고의 업무, 인원 수, 신청마감일을 출력함
    전달 인자: FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember
    반환값: 없음
*/
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