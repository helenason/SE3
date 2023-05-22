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
	함수 이름 : Company::Company()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Company::Company()
{
	this->recruitment = new Recruitment();
	this->businessNum = "abc";
}

/*
	함수 이름 : Company::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Company::getBusinessNum()
{
	return businessNum;
}

/*
	함수 이름 : Company::getRecruitments()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Recruitment* Company::getRecruitment()
{
	return recruitment;
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
	함수 이름 : Company::updateApplicantsNumByTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Company::updateApplicantsNumByTask(string task)
{
	applicantsNumByTask[task] -= 1;
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
	함수 이름 : Recruitment::Recruitment()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Recruitment::Recruitment()
{
	this->companyName = "companyName" ;
}

/*
	함수 이름 : Recruitment::getCompanyName()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
const char* Recruitment::getCompanyName()
{
	return companyName;
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
	함수 이름 : Recruitment::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Recruitment::getBusinessNum()
{
	return businessNum;
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
	함수 이름 : Recruitment::removePerson()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Recruitment::removePerson()
{
	if (applicantsNum > 0) {
		applicantsNum -= 1;
	}
}

/*
	함수 이름 : Person::Person()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Person::Person()
{
	this->ownedApplicationCollection = new ApplicationCollection();
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
void Person::cancelApplication(string businessNum, string task)
{
	applyNumByTask[task] -= 1;

	ownedApplicationCollection->deleteApplication(businessNum);
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
	함수 이름 : ApplicationCollection::ApplicationCollection()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ApplicationCollection::ApplicationCollection()
{
	ownedApplication[0] = new Application();
}

/*
	함수 이름 : ApplicationCollection::deleteApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplicationCollection::deleteApplication(string businessNum)
{
	for (int i = 0; i < 100; i++)
	{
		if (ownedApplication[i]->getBusinessNum() == businessNum)
		{
			delete ownedApplication[i];
			return;
		}
	}
}

/*
	함수 이름 : Application::Application()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Application::Application()
{
	this->businessNum = "abc";
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

/*
	함수 이름 : Application::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
string Application::getBusinessNum()
{
	return businessNum;
}