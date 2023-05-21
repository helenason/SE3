#include<iostream>

using namespace std;

class CancelApplication;

/*
	클래스 이름 : CancelApplicationUI
	기능	  :
*/
class CancelApplicationUI
{
private:
	CancelApplication* cancelApplication;
public:
	CancelApplicationUI(CancelApplication* cancelApplication);
	void selectApplication();
	void showApplications();


};

/*
	클래스 이름 :
	기능	  :
*/
class CancelApplication
{
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	void cancelApplication();
};