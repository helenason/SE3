#pragma once
#include <iostream>
#include <unordered_map>
#include "Company.h"

using namespace std;

/*
    함수 이름 : Company::Company()
    기능	  : 생성자 역할
    전달 인자 : int memClassifier, string companyName, string businessNum, string id, string password
    반환값    : 없음
*/
Company::Company(int memClassifier, string companyName, string businessNum, string id, string password) : Member(memClassifier, id, password) {
    this->id = id;
    this->password = password;
    this->companyName = companyName;
    this->businessNum = businessNum;
}

/*
    함수 이름 : Company::getRecruitment()
    기능	  : Recruitment 포인터의 ownedRecruitment 반환함
    전달 인자 : 없음
    반환값    : Recruitment 포인터의 ownedRecruitment
*/
Recruitment* Company::getRecruitment() {
    return this->ownedRecruitment;
}

/*
    함수 이름: Company::getBusinessNum()
    기능 : 사업자번호를 알려줌
    전달 인자: 없음
    반환값: company instance의 businessNum
*/
string Company::getBusinessNum() {
    return this->businessNum;
}

/*
    함수 이름: Company::getCompanyName()
    기능: companyName을 반환함
    전달 인자: 없음
    반환값: company instance의 companyName
*/
string Company::getCompanyName() {
    return this->companyName;
}

/*
    함수 이름: Company::addRecruitment()
    기능: 전달 인자인 recruitment를 ownedRecruitment로 저장하여, 새로운 recruitment을 company에 추가함
    전달 인자: Recruitment* recruitment
    반환값: 없음
*/
void Company::addRecruitment(Recruitment* newRecruitment) {
    this->ownedRecruitment = newRecruitment;
}
void Company::updateApplicants(string task) {
    this->applicantsNumByTask[task] += 1;
}
/*
    함수 이름 : Company::getStatistics()
    기능	  :업무별 지원자 수를 반환한다.
    전달 인자 : 없음
    반환값    : 업무별 지원자 수
*/
unordered_map<string, int> Company::getStatistics()
{
    return applicantsNumByTask;
}

/*
    함수 이름 : Company::subtractApplicantsNumByTask()
    기능	  : 업무별 지원자 수를 담은 맵에 해당 업무의 지원자 수를 하나 감소시킨다.
    전달 인자 : string task
    반환값    : 없음
*/
void Company::subtractApplicantsNumByTask(string task)
{
    if (applicantsNumByTask[task] > 0)
    {
        applicantsNumByTask[task] -= 1;
    }
}