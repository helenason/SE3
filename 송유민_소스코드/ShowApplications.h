#pragma once
#include <iostream>
#include <string>
#include "ShowApplicationsUI.h"
#include "Member.h"

using namespace std;

class ApplicationCollection;
class ShowApplicationsUI;

/*
	Ŭ���� �̸� :
	���	  :
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