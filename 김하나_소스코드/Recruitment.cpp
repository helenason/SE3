#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"

using namespace std;

/*
    함수 이름: Recruitment::Recruitment()
    기능: Recruitment Constructor
    전달 인자: string name, string num, string task, int nPeople, string deadline
    반환값: 없음
*/
Recruitment::Recruitment(string name, string num, string task, int nPeople, string deadline) {
	this->companyName = name;
	this->businessNum = num;
	this->task = task;
	this->numPeople = nPeople;
	this->applyDeadline = deadline;
}

/*
    함수 이름: Recruitment::getRecruitment()
    기능: recruitment 정보를 가져옴
    전달 인자: 없음
    반환값: Recruitment의 instance
*/
Recruitment Recruitment::getRecruitment() {
    return Recruitment(this->companyName, this->businessNum, this->task, this->numPeople, this->applyDeadline);
}

/*
    함수 이름: Recruitment::getCompanyName()
    기능: Recruitment instance의 companyName(회사 이름) 반환
    전달 인자: 없음
    반환값: Recruitment instance의 companyName
*/
string Recruitment::getCompanyName() {
	return this->companyName;
}

/*
    함수 이름: Recruitment::getBusinessNum()
    기능: Recruitment instance의 businessNum(사업자번호) 반환
    전달 인자: 없음
    반환값: Recruitment instance의 businessNum
*/
string Recruitment::getBusinessNum() {
	return this->businessNum;
}

/*
    함수 이름: Recruitment::getTask()
    기능: Recruitment instance의 task(업무) 반환
    전달 인자: 없음
    반환값: Recruitment instance의 task
*/
string Recruitment::getTask() {
	return this->task;
}

/*
    함수 이름: Recruitment::getNumPeople()
    기능: Recruitment instance의 numPeople(지원 가능 인원수) 반환
    전달 인자: 없음
    반환값: Recruitment instance의 numPeople
*/
int Recruitment::getNumPeople() {
	return this->numPeople;
}

/*
    함수 이름: Recruitment::getApplyDeadline()
    기능: Recruitment instance의 applyDeadline(지원 마감일) 반환
    전달 인자: 없음
    반환값: Recruitment instance의 applyDeadline
*/
string Recruitment::getApplyDeadline() {
	return this->applyDeadline;
}
