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
	클래스 이름 :
	기능	  :
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
	Recruitment* recruitment;
	string businessNum;
public:
	Company();
	string getBusinessNum();
	Recruitment* getRecruitment();
	virtual void showStatistics();
	void updateApplicantsNumByTask(string task);
};



/*
	클래스 이름 :
	기능	  :
*/
class Recruitment
{
private:
	const char* companyName;
	string task;
	int numPeople;
	string applyDeadline;
	string businessNum;
	int applicantsNum = 0;
public:
	Recruitment();
	void findRecruitmentEqualToApplication();
	const char* getCompanyName();
	string getTask();
	string getBusinessNum();
	int getApplicantsNum();
	void removePerson();
};



/*
	클래스 이름 :
	기능	  :
*/
class Person :public Member
{
private:
	unordered_map<string, int> applyNumByTask;
	ApplicationCollection* ownedApplicationCollection;
public:
	Person();
	ApplicationCollection* listApplications();
	void cancelApplication(string businessNum, string task);
	virtual void showStatistics();
};


/*
	클래스 이름 :
	기능	  :
*/
class ApplicationCollection
{
private:
	Application* ownedApplication[100];
	int count = 0;
public:
	ApplicationCollection();
	void deleteApplication(string buisnessNum);
};

/*
	클래스 이름 :
	기능	  :
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
	Application();
	Application* getApplicationDetails();
	void deleteApplication();
	string getTask();
	string getBusinessNum();
};