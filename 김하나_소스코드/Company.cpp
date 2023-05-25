#pragma once
#include <iostream>
#include "Company.h"
#include "Member.h"

using namespace std;

Company::Company(int numRecruitments, string companyName, string businessNum, Recruitment* ownedRecruitment) : Member(id, password) {
    this->numRecruitments = numRecruitments;
    this->companyName = companyName;
    this->businessNum = businessNum;
    this->ownedRecruitment = new Recruitment("a", "a", "a", 1, "a", "a");
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
string Company::getCompanyName(string businessNum, Company** companies, int companiesCount) {

    for (int i = 0; i < companiesCount; i++) {
        if (businessNum == companies[i]->getBusinessNum()) {
            return companies[i]->companyName;
            break;
        }
    }
}

/*
    함수 이름: Company::addRecruitment()
    기능: 전달 인자인 recruitment를 ownedRecruitment로 저장하여, 새로운 recruitment을 company에 추가함;
         또한, company당 recruitment 수를 알 수 있도록, 추가할 때, numRecruitments를 증가시킴
    전달 인자: Recruitment* recruitment
    반환값: 없음
*/
void Company::addRecruitment(Recruitment* recruitment) {
    this->ownedRecruitment = recruitment;
    numRecruitments++;
}

/*
    함수 이름: Company::getRecruitmentsNum()
    기능: 각 company가 갖고있는 recruitment의 개수 반환
    전달 인자: 없음
    반환값: numRecruitments
*/
int Company::getRecruitmentsNum() {
    return this->numRecruitments;
}