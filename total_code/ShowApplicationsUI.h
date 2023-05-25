#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;

class ShowApplications;

/*
	????? ??? :ShowApplicationsUI
	???	  : 지원 정보 조회의 바운더리 클래스로 해당 부분의 입출력을 담당한다.
*/
class ShowApplicationsUI
{
private:
	ShowApplications* showApplications;
public:
	ShowApplicationsUI(ShowApplications* showApplications);
	void showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember);
};