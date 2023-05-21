#include "Entities.h"

/*
	함수 이름 : Member::showStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Member::showStatistics()
{

}

/*
	함수 이름 : Company::getCompany()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Company* Company::getCompany()
{
	return this;
}

/*
	함수 이름 : Company::listRecruitments()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
RecruitmentCollection* Company::listRecruitments()
{
	return ownedRecruitmentCollection;
}

/*
	함수 이름 : Company::printApplicantsNumByTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Company::printApplicantsNumByTask()
{
	applicantsNumByTask.size();
}


/*
	함수 이름 : Company::showStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Company::showStatistics()
{

}

/*
	함수 이름 : Recruitment::findRecruitmentEqualToApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Recruitment::findRecruitmentEqualToApplication()
{

}

/*
	함수 이름 : Recruitment::deletePerson()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Recruitment::deletePerson()
{

}

/*
	함수 이름 : Recruitment::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getTask()
{
	return task;
}

/*
	함수 이름 : Recruitment::getApplicantsNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
int Recruitment::getApplicantsNum()
{
	return applicantsNum;
}

/*
	함수 이름 : Person::listApplications()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ApplicationCollection* Person::listApplications()
{
	return ownedApplicationCollection;
}

/*
	함수 이름 : Person::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Person::cancelApplication()
{

}

/*
	함수 이름 : Person::getPerson()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Person* Person::getPerson()
{
	return this;
}

/*
	함수 이름 : Person::printApplyNumByTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Person::printApplyNumByTask()
{

}

/*
	함수 이름 : Person::showStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Person::showStatistics()
{

}

/*
	함수 이름 : Application::getApplicationDetails()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Application* Application::getApplicationDetails()
{
	return this;
}

/*
	함수 이름 : Application::deleteApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Application::deleteApplication()
{

}

/*
	함수 이름 : Application::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getTask()
{
	return task;
}