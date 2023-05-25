#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

class ShowApplications;

/*
	클래스 이름 :ShowApplicationsUI
	기능	  : ���� ���� ��ȸ�� �ٿ���� Ŭ������ �ش� �κ��� ������� ����Ѵ�.
*/
class ShowApplicationsUI
{
private:
	ShowApplications* showApplications;
public:
	ShowApplicationsUI(ShowApplications* showApplications);
	void showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember);
};