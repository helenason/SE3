#include "Entities.h"

/*
	�Լ� �̸� : Member::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Member::getStatistics()
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
	this->businessNum = "12345";
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
	�Լ� �̸� : Company::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::getStatistics()
{

}

/*
	�Լ� �̸� : Company::subtractApplicantsNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::subtractApplicantsNumByTask(string task)
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
	�Լ� �̸� : Person::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Person::getStatistics()
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
	this->businessNum = "12345";
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