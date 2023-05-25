#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class ShowApplicationsUI;
class ApplicationCollection;

/*
	클래스 이름 :ShowApplications
	기능	  :컨트롤 클래스로 로그인한 일반 회원의 지원 정보를 가져온다.
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