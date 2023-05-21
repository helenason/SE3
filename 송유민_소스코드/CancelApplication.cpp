#include "CancelApplication.h"

/*
	함수 이름 : CancelApplicationUI::selectApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplicationUI::selectApplication()
{

}

/*
	함수 이름 : CancelApplicationUI::showApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplicationUI::showApplications()
{

}
/*
	함수 이름 : CancelApplicationUI::CancelApplicationUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/

CancelApplicationUI::CancelApplicationUI(CancelApplication* cancelApplication)
{
	this->cancelApplication = cancelApplication;
}
/*
	함수 이름 : CancelApplication::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplication::cancelApplication()
{
	cancelApplicationUI = new CancelApplicationUI(this);
}