#pragma once
#include <iostream>
#include <string>

using namespace std;
class CancelApplicationUI;
class Company;
class Member;
/*
	Ŭ���� �̸� :CancelApplication
	���	  :��Ʈ�� Ŭ������ �Է¹��� ����� ��ȣ�� �������� 
			  �α����� ȸ���� ���� �� ���� ����� ������ ���� ������ ����Ѵ�.
*/
class CancelApplication
{
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	CancelApplication();
	CancelApplicationUI* getCancelApplicationUI();
	Company* cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum);
};