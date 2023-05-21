#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Member;
class Company;
class RecruitmentCollection;
class Recruitment;
class PersonCollection;
class Person;
class ApplicationCollection;
class Application;

/*
	Ŭ���� �̸� :
	���	  :
*/
class Member
{
private:

public:
	virtual void showStatistics();

};

class Company :public Member
{
private:
	unordered_map<string, int> applicantsNumByTask;
	RecruitmentCollection* ownedRecruitmentCollection;
public:
	Company* getCompany();
	RecruitmentCollection* listRecruitments();
	void printApplicantsNumByTask();
	virtual void showStatistics();
};

/*
	Ŭ���� �̸� :
	���	  :
*/
class RecruitmentCollection
{
private:
	Recruitment* ownedRecruitment[100];
};

/*
	Ŭ���� �̸� :
	���	  :
*/
class Recruitment
{
private:
	string companyName;
	string task;
	int numPeople;
	string applyDeadline;
	string businessNum;
	int applicantsNum = 0;
	PersonCollection* ownedPersonCollection;
public:
	void findRecruitmentEqualToApplication();
	void deletePerson();
	string getTask();
	int getApplicantsNum();
};

/*
	Ŭ���� �̸� :
	���	  :
*/
class PersonCollection
{
private:
	Person* ownedPerson[100];
public:
};

/*
	Ŭ���� �̸� :
	���	  :
*/
class Person :public Member
{
private:
	unordered_map<string, int> applyNumByTask;
	ApplicationCollection* ownedApplicationCollection;
public:
	ApplicationCollection* listApplications();
	void cancelApplication();
	Person* getPerson();
	void printApplyNumByTask();
	virtual void showStatistics();
};


/*
	Ŭ���� �̸� :
	���	  :
*/
class ApplicationCollection
{
private:
	Application* ownedApplication[100];
public:
};

/*
	Ŭ���� �̸� :
	���	  :
*/
class Application
{
private:
	string companyName;
	string task;
	int numPeople;
	string applyDeadline;
	string businessNum;
public:
	Application* getApplicationDetails();
	void deleteApplication();
	string getTask();
};