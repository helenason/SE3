#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

class ShowApplications;

/*
	????? ??? :ShowApplicationsUI
	???	  : ���� ���� ��ȸ�� �ٿ���� Ŭ������ �ش� �κ��� ������� ����Ѵ�.
*/
class ShowApplicationsUI
{
private:
	ShowApplications* showApplications;
public:
	ShowApplicationsUI(ShowApplications* showApplications);
	void showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember);
};