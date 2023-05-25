#pragma once
#include<string>
#include "ShowApplications.h"
#include "Member.h"
#include "ShowApplicationsUI.h"


/*
	함수 이름 : ShowApplications::showApplications()
	기능	  : 해당 회원의 지원 정보 컬렉션을 반환한다.
	전달 인자 : Member* member
	반환값    : ApplicationCollection* 타입의 지원 정보 컬렉션
*/
ApplicationCollection* ShowApplications::showApplications(Member* member)
{
	return member->getApplicationCollection();

}

/*
	함수 이름 : ShowApplications::ShowApplications()
	기능	  : 생성자로 ShowApplicationsUI 타입 객체의 생성자에 자신을 인자로 전달해
			   멤버변수인 showApplicationsUI에 할당한다.
	전달 인자 : 없음
	반환값    : 없음
*/
ShowApplications::ShowApplications()
{
	showApplicationsUI = new ShowApplicationsUI(this);
}

/*
	함수 이름 : ShowApplications::getShowApplicationsUI()
	기능	  :ShowApplicationsUI* 타입의 바운더리 클래스를 반환한다.
	전달 인자 : 없음
	반환값    : ShowApplicationsUI* 타입의 바운더리 클래스
*/
ShowApplicationsUI* ShowApplications::getShowApplicationsUI()
{
	return showApplicationsUI;
}