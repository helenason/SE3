#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <string>
#include "Entities.h"



/*
	�Լ� �̸� : Member::cancelApplication()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Member::cancelApplication(char* businessNum, char* task)
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
	strcpy(this->businessNum, "12345");
}

/*
	�Լ� �̸� : Company::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
char* Company::getBusinessNum()
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
unordered_map<string, int> Company::getStatistics()
{
	return applicantsNumByTask;
}

/*
	�Լ� �̸� : Company::subtractApplicantsNumByTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void Company::subtractApplicantsNumByTask(char* task)
{
	string stringTask(task);
	applicantsNumByTask[stringTask] -= 1;
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
	 strcpy(this->companyName, "companyName");
	 strcpy(this->task, "task");
}

/*
	�Լ� �̸� : Recruitment::getCompanyName()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
char* Recruitment::getCompanyName()
{
	return companyName;
}

/*
	�Լ� �̸� : Recruitment::getTask()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
char* Recruitment::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Recruitment::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
char* Recruitment::getBusinessNum()
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
		cout << "applicantsNum: " << applicantsNum;
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
	char task[32] = "task";
	char zero[32] = "zero";
	const char* charPointer = "charPointer";

	//string stringTask(task);
	//string stringZero(zero);

	this->applyNumByTask[zero] = 0;
	this->applyNumByTask[task] = 1;
	this->applyNumByTask[charPointer]=8;
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
void Person::cancelApplication(char* businessNum, char* task)
{
	applyNumByTask[task] -= 1;
	cout << endl << applyNumByTask[task]<<endl;
	cout << endl << "Person::cancelApplication�� task: " << task << endl;

	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	�Լ� �̸� : Person::getStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
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
void ApplicationCollection::deleteApplication(char* businessNum)
{
	cout << "before count: " << count << endl;
	for (int i = 0; i < this->count; i++)
	{
		if (!strcmp(ownedApplication[i]->getBusinessNum(), businessNum))
		{
			for (int j = 0; j < this->count - i - 1; j++)
			{
				cout << "before cancel: " << this->ownedApplication[j]->getBusinessNum() << endl;
				this->ownedApplication[j + i] = this->ownedApplication[j + i + 1];
				cout << "before cancel: " << this->ownedApplication[j]->getBusinessNum() << endl;
			}
			
				break;
		}
	}
	if (count > 0)
	{
		this->count--;
	}
	
	cout << "after count: " << count << endl;
}

/*
	�Լ� �̸� : Application::Application()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
Application::Application()
{
	strcpy(this->businessNum,"12345");
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
char* Application::getTask()
{
	return task;
}

/*
	�Լ� �̸� : Application::getBusinessNum()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
char* Application::getBusinessNum()
{
	return businessNum;
}