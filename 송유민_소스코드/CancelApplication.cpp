#include "CancelApplication.h"

/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::selectApplication()
{

}

/*
	�Լ� �̸� : CancelApplicationUI::showApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::showApplications()
{

}
/*
	�Լ� �̸� : CancelApplicationUI::CancelApplicationUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}
/*
	�Լ� �̸� : CancelApplication::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplication::cancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}