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
	�Լ� �̸� : Company::getCompany()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Company* Company::getCompany()
{
	return this;
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
	�Լ� �̸� : Company::listRecruitments()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
RecruitmentCollection* Company::listRecruitments()
{
	return ownedRecruitmentCollection;
}

/*
	�Լ� �̸� : Company::printApplicantsNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::printApplicantsNumByTask()
{
	applicantsNumByTask.size();
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
	�Լ� �̸� : Recruitment::findRecruitmentEqualToApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Recruitment::findRecruitmentEqualToApplication()
{

}

/*
	�Լ� �̸� : Recruitment::deletePerson()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Recruitment::deletePerson()
{

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
void Person::cancelApplication(string businessNum)
{
	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	�Լ� �̸� : Person::getPerson()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Person* Person::getPerson()
{
	return this;
}

/*
	�Լ� �̸� : Person::printApplyNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Person::printApplyNumByTask()
{

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