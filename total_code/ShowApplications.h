#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class ShowApplicationsUI;
class ApplicationCollection;

/*
	Ŭ���� �̸� :ShowApplications
	���	  :��Ʈ�� Ŭ������ �α����� �Ϲ� ȸ���� ���� ������ �����´�.
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