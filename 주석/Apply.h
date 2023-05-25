#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

class Application;
/*
* 클래스 이름 : Apply
* 클래스 기능 : control 클래스로서 지원 use case 담당
*/
class Apply {
public:
	Application* apply(string businessNum, Company** companies, int companiesCount, Member* loginMember);

};