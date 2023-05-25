#pragma once
#include<string>
#include "ShowApplications.h"
#include "Member.h"
#include "ShowApplicationsUI.h"


/*
	�Լ� �̸� : ShowApplications::showApplications()
	���	  : �ش� ȸ���� ���� ���� �÷����� ��ȯ�Ѵ�.
	���� ���� : Member* member
	��ȯ��    : ApplicationCollection* Ÿ���� ���� ���� �÷���
*/
ApplicationCollection* ShowApplications::showApplications(Member* member)
{
	return member->getApplicationCollection();

}

/*
	�Լ� �̸� : ShowApplications::ShowApplications()
	���	  : �����ڷ� ShowApplicationsUI Ÿ�� ��ü�� �����ڿ� �ڽ��� ���ڷ� ������
			   ��������� showApplicationsUI�� �Ҵ��Ѵ�.
	���� ���� : ����
	��ȯ��    : ����
*/
ShowApplications::ShowApplications()
{
	showApplicationsUI = new ShowApplicationsUI(this);
}

/*
	�Լ� �̸� : ShowApplications::getShowApplicationsUI()
	���	  :ShowApplicationsUI* Ÿ���� �ٿ���� Ŭ������ ��ȯ�Ѵ�.
	���� ���� : ����
	��ȯ��    : ShowApplicationsUI* Ÿ���� �ٿ���� Ŭ����
*/
ShowApplicationsUI* ShowApplications::getShowApplicationsUI()
{
	return showApplicationsUI;
}