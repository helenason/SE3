#include<iostream>

using namespace std;

class CancelApplication;

/*
	Ŭ���� �̸� : CancelApplicationUI
	���	  :
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
	Ŭ���� �̸� :
	���	  :
*/
class CancelApplication
{
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	void cancelApplication();
};