#pragma once
#include <iostream>
#include "Company.h"
#include "Recruitment.h"

using namespace std;

Company::Company(string id, string password, string companyName, string businessNum) : Member(id, password) {
    this->id = id;
    this->password = password;
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->ownedRecruitment = new Recruitment("reName", "reNum", "reTask", 100, "reDeadline", "reId"); // test case !!
}

Recruitment* Company::getRecruitment() {
    return this->ownedRecruitment;
}

string Company::getBusinessNum() {
    return this->businessNum;
}

/*
    함수 이름: Company::getCompanyName()
    기능: 전달 인자인 businessNum(사업자번호)과 companies의 getBusinessNum()을 이용하여 반환받은 사업자번호가 동일하면, companyName을 반환함
    전달 인자: string businessNum, Company** companies, int companiesCount
    반환값: companyName
*/
string Company::getCompanyName() {
    return this->companyName;
}

/*
    함수 이름: Company::addRecruitment()
    기능: 전달 인자인 recruitment를 ownedRecruitment로 저장하여, 새로운 recruitment을 company에 추가함;
         또한, company당 recruitment 수를 알 수 있도록, 추가할 때, numRecruitments를 증가시킴
    전달 인자: Recruitment* recruitment
    반환값: 없음
*/
void Company::addRecruitment(Recruitment* newRecruitment) {
    this->ownedRecruitment = newRecruitment;
}
void Company::updateApplicants(string task) {
    this->applicantsNumByTask[task] += 1;
}