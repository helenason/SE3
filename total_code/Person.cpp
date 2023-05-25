#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "Person.h"
using namespace std;

/*
	함수 이름 : Person::Person()
	기능	  : 생성자로 멤버 변수들을 초기화한다.
	전달 인자 : int memClassifier, string personName, string regNum, string id, string password
	반환값	  : 없음
*/
Person::Person(int memClassifier, string personName, string regNum, string id, string password) :Member(memClassifier, id, password) {
	this->id = id;
	this->password = password;
	this->personName = personName;
	this->regNum = regNum;
	this->ownedApplicationCollection = new ApplicationCollection();
}

/*
	함수 이름 : Person::getPersonName()
	기능	  : 회원의 이름을 반환한다.
	전달 인자 : 없음
	반환값	  : 회원의 이름
*/
string Person::getPersonName() {
	return this->personName;
}

/*
	함수 이름 : Person::getRegNum()
	기능	  : 회원의 주민등록번호를 반환한다.
	전달 인자 : 없음
	반환값	  : 회원의 주민등록번호
*/
string Person::getRegNum() {
	return this->regNum;
}

/*
	함수 이름 : Person::addNewApplication
	기능	  : 회원의 지원 정보 추가
	전달 인자 : Application* application, string task
	반환값	  : 없음
*/
void Person::addNewApplication(Application* application, string task) {
	this->ownedApplicationCollection->addApplication(application);
	this->applyNumByTask[task] += 1;
}

/*
	함수 이름 : Person::getApplicationCollection
	기능	  : 회원의 지원 정보 컬렉션을 반환한다.
	전달 인자 : 없음
	반환값	  : 회원의 지원 정보 컬렉션
*/
ApplicationCollection* Person::getApplicationCollection()
{
	return ownedApplicationCollection;
}

/*
	함수 이름 : Person::cancelApplication()
	기능	  : 해당 회원이 취소 희망하는 지원 정보를 취소한다.
	전달 인자 : string businessNum, string task
	반환값    : 없음
*/
void Person::cancelApplication(string businessNum, string task)
{
	if (applyNumByTask[task] > 0)
	{
		applyNumByTask[task] -= 1;
	}

	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	함수 이름 : Person::getStatistics()
	기능	  : 회원의 지원 정보 통계를 반환한다.
	전달 인자 : 없음
	반환값    : 회원의 업무별 지원 횟수
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
}