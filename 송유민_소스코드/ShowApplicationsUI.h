#pragma once
#include <iostream>
#include <string>
#include "ShowApplications.h"
#include "Member.h"


using namespace std;

class ShowApplications;

/*
	클래스 이름 :
	기능	  :
*/
class ShowApplicationsUI
{
private:
	ShowApplications* showApplications;
public:
	ShowApplicationsUI(ShowApplications* showApplications);
	void showAllApplications(FILE* inputFile, FILE* outputFile, Member* loginMember);
};