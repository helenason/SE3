#pragma once
#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

/*
	함수 이름 : Application::getCompanyName()
	기능	  : getter 함수
	전달 인자 : 없음
	반환값	  : 지원 정보의 회사 이름
*/
string Application::getCompanyName() {
	return this->companyName;
}
/*
	함수 이름 : Application::getBusinessNum()
	기능	  : getter 함수
	전달 인자 : 없음
	반환값	  : 지원 정보의 사업자 번호
*/
string Application::getBusinessNum() {
	return this->businessNum;
}
/*
	함수 이름 : Application::getTask()
	기능	  : getter 함수
	전달 인자 : 없음
	반환값	  : 지원 정보의 업무
*/
string Application::getTask() {
	return this->task;
}
/*
	함수 이름 : Application::getNumPeople()
	기능	  : getter 함수
	전달 인자 : 없음
	반환값	  : 지원 정보의 인원수
*/
int Application::getNumPeople() {
	return this->numPeople;
}
/*
	함수 이름 : Application::getApplyDeadline()
	기능	  : getter 함수
	전달 인자 : 없음
	반환값	  : 지원 정보의 마감일
*/
string Application::getApplyDeadline() {
	return this->applyDeadline;
}