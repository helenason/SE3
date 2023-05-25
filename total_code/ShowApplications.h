#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class ShowApplicationsUI;
class ApplicationCollection;

/*
	클래스 이름 :
	기능	  :
*/
class ShowApplications
{
private:
	ShowApplicationsUI* showApplicationsUI;
public:
	ShowApplications();
	ShowApplicationsUI* getShowApplicationsUI();
	ApplicationCollection* showApplications(Member* member);
};