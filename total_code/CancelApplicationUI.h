#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Company.h"

using namespace std;
class CancelApplication;

/*
	클래스 이름 : CancelApplicationUI
	기능	  :  바운더리 클래스로 지원 취소 부분의 입출력을 담당한다.
*/
class CancelApplicationUI
{
private:
	CancelApplication* cancelApplication;
public:
	CancelApplicationUI(CancelApplication* cancelApplication);
	void selectApplication(FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount);
};