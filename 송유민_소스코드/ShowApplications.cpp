#pragma once
#include<string>
#include "ShowApplications.h"


/*
	함수 이름 : ShowApplications::showApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ApplicationCollection* ShowApplications::showApplications(Member* member)
{
	return member->getApplicationCollection();
	
}

/*
	함수 이름 : ShowApplications::ShowApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ShowApplications::ShowApplications()
{
	showApplicationsUI = new ShowApplicationsUI(this);
}

/*
	함수 이름 : ShowApplications::getShowApplicationsUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ShowApplicationsUI* ShowApplications::getShowApplicationsUI()
{
	return showApplicationsUI;
}