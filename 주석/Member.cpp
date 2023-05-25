#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

/*
    함수 이름: Member::Member()
    기능: Member Constructor
    전달 인자: string id, string password
    반환값: 없음
*/
Member::Member(int memClassifier, string id, string password) {
    this->memClassifier = memClassifier;
    this->id = id;
    this->password = password;
}
int Member::getMemClassifier()
{
    return this->memClassifier;
}

/*
    함수 이름: Member::getId()
    기능: member의 id 반환
    전달 인자: 없음
    반환값: id
*/
string Member::getId() {
    return this->id;
}

/*
    함수 이름: Member::getPassword()
    기능: member의 password 반환
    전달 인자: 없음
    반환값: password
*/
string Member::getPassword() {
    return this->password;
}

/*
    함수 이름: Member::getBusinessNum()
    기능: 
    전달 인자: 없음
    반환값:
*/
string Member::getBusinessNum() { return ""; }
Recruitment* Member::getRecruitment() { return nullptr; }
string Member::getCompanyName() { return ""; }
void Member::addRecruitment(Recruitment* newRecruitment) {}
void Member::addNewApplication(Application* application, string task) {}
/*
    함수 이름 : Member::cancelApplication()
    기능	  :
    전달 인자 : 없음
    반환값    : 없음
*/
void Member::cancelApplication(string businessNum, string task)
{

}

/*
    함수 이름 : Member::listApplications()
    기능	  :
    전달 인자 : 없음
    반환값    : 없음
*/
ApplicationCollection* Member::getApplicationCollection()
{
    return 0;
}