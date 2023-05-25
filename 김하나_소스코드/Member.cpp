#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Recruitment.h"

using namespace std;

/*
    함수 이름: Member::Member()
    기능: Member Constructor
    전달 인자: string id, string password
    반환값: 없음
*/
Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
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
    기능: member의 businessNum 반환
    전달 인자: 없음
    반환값: businessNum
*/
string Member::getBusinessNum() {
	return this->businessNum;
}

Recruitment* Member::getRecruitment() {

}