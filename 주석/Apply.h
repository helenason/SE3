#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

class Application;
/*
* Ŭ���� �̸� : Apply
* Ŭ���� ��� : control Ŭ�����μ� ���� use case ���
*/
class Apply {
public:
	Application* apply(string businessNum, Company** companies, int companiesCount, Member* loginMember);

};