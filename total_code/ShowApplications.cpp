#pragma once
#include<string>
#include "ShowApplications.h"
#include "Member.h"
#include "ShowApplicationsUI.h"


/*
	�Լ� �̸� : ShowApplications::showApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationCollection* ShowApplications::showApplications(Member* member)
{
	return member->getApplicationCollection();

}

/*
	�Լ� �̸� : ShowApplications::ShowApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ShowApplications::ShowApplications()
{
	showApplicationsUI = new ShowApplicationsUI(this);
}

/*
	�Լ� �̸� : ShowApplications::getShowApplicationsUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ShowApplicationsUI* ShowApplications::getShowApplicationsUI()
{
	return showApplicationsUI;
}