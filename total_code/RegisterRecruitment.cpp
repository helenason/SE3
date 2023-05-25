#pragma once
#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"

using namespace std;

/*
    함수 이름: RegisterRecruitment::registerNewRecruitment()
    기능: 새로운 recruitment instance(newRecruitment)를 생성함;
         그러기 위해 member의 사업자번호, 아이디, 회사번호 저장함
    전달 인자: string task, int numPeople, string applyDeadline, Member* member
    반환값: 생성된 newRecruitment
*/
Recruitment* RegisterRecruitment::registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member)
{
    string businessNum = member->getBusinessNum();
    string id = member->getId();
    string companyName = member->getCompanyName();

    Recruitment* newRecruitment = new Recruitment(companyName, businessNum, task, numPeople, applyDeadline, id);
    member->addRecruitment(newRecruitment);

    return newRecruitment;
}
