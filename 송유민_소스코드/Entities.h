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
	virtual unordered_map<string, int> getStatistics()=0;
	virtual void cancelApplication(char* businessNum, char* task);

};

class Company :public Member
{
private:
	unordered_map<string, int> applicantsNumByTask;
	Recruitment* recruitment;
	char businessNum[32];
public:
	Company();
	char* getBusinessNum();
	Recruitment* getRecruitment();
	void subtractApplicantsNumByTask(char* task);
	virtual unordered_map<string, int> getStatistics();
};



/*
	클래스 이름 :
	기능	  :
*/
class Recruitment
{
private:
	char companyName[32];
	char task[32];
	int numPeople;
	char applyDeadline[32];
	char businessNum[32];
	int applicantsNum = 0;
public:
	Recruitment();
	void findRecruitmentEqualToApplication();
	char* getCompanyName();
	char* getTask();
	char* getBusinessNum();
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
	virtual void cancelApplication(char* businessNum, char* task);
	virtual unordered_map<string, int> getStatistics();
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
	void deleteApplication(char* buisnessNum);
};

/*
	클래스 이름 :
	기능	  :
*/
class Application
{
private:
	char companyName[32];
	char task[32];
	int numPeople;
	char applyDeadline[32];
	char businessNum[32];
public:
	Application();
	Application* getApplicationDetails();
	char* getTask();
	char* getBusinessNum();
};