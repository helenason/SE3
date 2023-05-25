//헤더 선언
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

//상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//함수 선언
void program_exit();

int main() {
	//변수 선언
	Member* loginMember=0;
	Member* members[100];
	int membersCount = 0;

	Company* companies[100];
	int companiesCount = 0;

	FILE* inputFile = fopen(INPUT_FILE_NAME, "r+");
	FILE* outputFile = fopen(OUTPUT_FILE_NAME, "w+");


	//Signin의 control, boundary 클래스 생성
	Signin* signin = new Signin();
	SigninUI* signinUI = signin->getSigninUI();

	//Signout의 control, boundary 클래스 생성
	Signout* signout = new Signout();
	SignoutUI* signoutUI = signout->getSignoutUI();

	//Login의 control, boundary 클래스 생성
	Login* login = new Login();
	LoginUI* loginUI = login->getLoginUI();

	//Logout의 control, boundary 클래스 생성
	Logout* logout = new Logout();
	LogoutUI* logoutUI = logout->getLogoutUI();

	//메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		//입력 파일에서 메뉴 숫자 2개를 읽기
		fscanf(inputFile, "%d %d ", &menu_level_1, &menu_level_2);

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				signinUI->signinUI(inputFile, outputFile, members, &membersCount, companies, &companiesCount);
				cout << "회원가입 후 membersCount: " << membersCount<<endl;
				break;
			}
			case 2:
			{
				signoutUI->signoutUI(inputFile, outputFile, loginMember, members, &membersCount, companies, &companiesCount);
				cout << "회원탈퇴 후 membersCount: " << membersCount << endl;
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
			case 1: // "6.1. 종료“ 메뉴 부분
			{

				fprintf(outputFile, "6.1. 종료\n");
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