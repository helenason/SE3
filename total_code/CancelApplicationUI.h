#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Company.h"

using namespace std;
class CancelApplication;

/*
	Ŭ���� �̸� : CancelApplicationUI
	���	  :  �ٿ���� Ŭ������ ���� ��� �κ��� ������� ����Ѵ�.
*/
class CancelApplicationUI
{
private:
	CancelApplication* cancelApplication;
public:
	CancelApplicationUI(CancelApplication* cancelApplication);
	void selectApplication(FILE* inputFile, FILE* outputFile, Member* loginMember, Company** companies, int companiesCount);
};