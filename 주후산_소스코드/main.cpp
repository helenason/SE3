//��� ����
#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include"Member.h"
#include"Person.h"
#include"Company.h"
#include"Signin.h"
#include"Signout.h"
#include"Login.h"
#include"Logout.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "SigninUI.h"
#include "SignoutUI.h"

using namespace std;

//��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//�Լ� ����
void program_exit();

int main() {
	//���� ����
	Member* loginMember=0;
	Member* members[100];
	int membersCount = 0;

	Company* companies[100];
	int companiesCount = 0;

	FILE* inputFile = fopen(INPUT_FILE_NAME, "r+");
	FILE* outputFile = fopen(OUTPUT_FILE_NAME, "w+");


	//Signin�� control, boundary Ŭ���� ����
	Signin* signin = new Signin();
	SigninUI* signinUI = signin->getSigninUI();

	//Signout�� control, boundary Ŭ���� ����
	Signout* signout = new Signout();
	SignoutUI* signoutUI = signout->getSignoutUI();

	//Login�� control, boundary Ŭ���� ����
	Login* login = new Login();
	LoginUI* loginUI = login->getLoginUI();

	//Logout�� control, boundary Ŭ���� ����
	Logout* logout = new Logout();
	LogoutUI* logoutUI = logout->getLogoutUI();

	//�޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		//�Է� ���Ͽ��� �޴� ���� 2���� �б�
		fscanf(inputFile, "%d %d ", &menu_level_1, &menu_level_2);

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				signinUI->signinUI(inputFile, outputFile, members, &membersCount, companies, &companiesCount);
				cout << "ȸ������ �� membersCount: " << membersCount<<endl;
				break;
			}
			case 2:
			{
				signoutUI->signoutUI(inputFile, outputFile, loginMember, members, &membersCount, companies, &companiesCount);
				cout << "ȸ��Ż�� �� membersCount: " << membersCount << endl;
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				loginMember = loginUI->loginUI(inputFile, outputFile, members, &membersCount);
				cout << "loginMember ID: " << loginMember->getId() << endl;
				break;
			}
			case 2:
			{
				cout << "loginMember ID: " << loginMember->getId() << endl;
				logoutUI->logoutUI(inputFile, outputFile, loginMember);

				loginMember = NULL;

				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1: // "6.1. ���ᡰ �޴� �κ�
			{

				fprintf(outputFile, "6.1. ����\n");
				is_program_exit = 1;
				break;;
			}
			}
			break;
		}
			
		}
	}

	return 0;
}

void program_exit() {}