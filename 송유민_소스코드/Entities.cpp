#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <string>
#include "Entities.h"



/*
	함수 이름 : Member::cancelApplication()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Member::cancelApplication(char* businessNum, char* task)
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
	strcpy(this->businessNum, "12345");
}

/*
	함수 이름 : Company::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Company::getBusinessNum()
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
	함수 이름 : Company::getStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
unordered_map<string, int> Company::getStatistics()
{
	return applicantsNumByTask;
}

/*
	함수 이름 : Company::subtractApplicantsNumByTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void Company::subtractApplicantsNumByTask(char* task)
{
	string stringTask(task);
	applicantsNumByTask[stringTask] -= 1;
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
	 strcpy(this->companyName, "companyName");
	 strcpy(this->task, "task");
}

/*
	함수 이름 : Recruitment::getCompanyName()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Recruitment::getCompanyName()
{
	return companyName;
}

/*
	함수 이름 : Recruitment::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Recruitment::getTask()
{
	return task;
}

/*
	함수 이름 : Recruitment::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Recruitment::getBusinessNum()
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
		cout << "applicantsNum: " << applicantsNum;
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
void Person::cancelApplication(char* businessNum, char* task)
{
	applyNumByTask[task] -= 1;
	cout << endl << applyNumByTask[task]<<endl;
	cout << endl << "Person::cancelApplication의 task: " << task << endl;

	ownedApplicationCollection->deleteApplication(businessNum);
}

/*
	함수 이름 : Person::getStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
unordered_map<string, int> Person::getStatistics()
{
	return applyNumByTask;
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
	함수 이름 : Application::Application()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
Application::Application()
{
	strcpy(this->businessNum,"12345");
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
	함수 이름 : Application::getTask()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Application::getTask()
{
	return task;
}

/*
	함수 이름 : Application::getBusinessNum()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
char* Application::getBusinessNum()
{
	return businessNum;
}