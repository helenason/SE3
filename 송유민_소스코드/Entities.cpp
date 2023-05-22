#include "Entities.h"

/*
	�Լ� �̸� : Member::showStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Member::showStatistics()
{

}

/*
	�Լ� �̸� : Company::Company()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Company::Company()
{
	this->recruitment = new Recruitment();
	this->businessNum = "abc";
}

/*
	�Լ� �̸� : Company::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Company::getBusinessNum()
{
	return businessNum;
}

/*
	�Լ� �̸� : Company::getRecruitments()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Recruitment* Company::getRecruitment()
{
	return recruitment;
}

/*
	�Լ� �̸� : Company::showStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::showStatistics()
{

}

/*
	�Լ� �̸� : Company::updateApplicantsNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::updateApplicantsNumByTask(string task)
{
	applicantsNumByTask[task] -= 1;
}


/*
	�Լ� �̸� : Recruitment::findRecruitmentEqualToApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Recruitment::findRecruitmentEqualToApplication()
{

}


/*
	�Լ� �̸� : Recruitment::Recruitment()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Recruitment::Recruitment()
{
	this->companyName = "companyName" ;
}

/*
	�Լ� �̸� : Recruitment::getCompanyName()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
const char* Recruitment::getCompanyName()
{
	return companyName;
}

/*
	�Լ� �̸� : Recruitment::getTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Recruitment::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Recruitment::getBusinessNum()
{
	return businessNum;
}

/*
	�Լ� �̸� : Recruitment::getApplicantsNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
int Recruitment::getApplicantsNum()
{
	return applicantsNum;
}

/*
	�Լ� �̸� : Recruitment::removePerson()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Recruitment::removePerson()
{
	if (applicantsNum > 0) {
		applicantsNum -= 1;
	}
}

/*
	�Լ� �̸� : Person::Person()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Person::Person()
{
	this->ownedApplicationCollection = new ApplicationCollection();
}

/*
	�Լ� �̸� : Person::listApplications()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationCollection* Person::listApplications()
{
	return ownedApplicationCollection;
}

/*
	�Լ� �̸� : Person::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Person::cancelApplication(string businessNum, string task)
{
	applyNumByTask[task] -= 1;

	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	�Լ� �̸� : Person::showStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Person::showStatistics()
{

}

/*
	�Լ� �̸� : ApplicationCollection::ApplicationCollection()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationCollection::ApplicationCollection()
{
	ownedApplication[0] = new Application();
}

/*
	�Լ� �̸� : ApplicationCollection::deleteApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
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
	�Լ� �̸� : Application::Application()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Application::Application()
{
	this->businessNum = "abc";
}

/*
	�Լ� �̸� : Application::getApplicationDetails()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Application* Application::getApplicationDetails()
{
	return this;
}

/*
	�Լ� �̸� : Application::deleteApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Application::deleteApplication()
{

}

/*
	�Լ� �̸� : Application::getTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Application::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
string Application::getBusinessNum()
{
	return businessNum;
}