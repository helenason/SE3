#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Member.h"
#include "Company.h"
#include "Signin.h"
#include "SigninUI.h"
#include "Signout.h"
#include "SignoutUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "RegisterRecruitmentUI.h"
#include "SearchRecruitmentListUI.h"
#include "SearchUI.h"
#include "ApplyUI.h"
#include "CancelApplication.h"
#include "ShowStatistics.h"
#include "ShowApplications.h"
#include "CancelApplicationUI.h"
#include "ShowStatisticsUI.h"
#include "ShowApplicationsUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    Member* loginMember = 0;

    Member* members[100];
    int membersCount = 0;

    Company* companies[100];
    int companiesCount = 0;


    Signin* signin = new Signin();
    SigninUI* signinUI = signin->getSigninUI();
    Signout* signout = new Signout();
    SignoutUI* signoutUI = signout->getSignoutUI();
    Login* login = new Login();
    LoginUI* loginUI = login->getLoginUI();
    Logout* logout = new Logout();
    LogoutUI* logoutUI = logout->getLogoutUI();
    RegisterRecruitmentUI* registerUI = new RegisterRecruitmentUI();
    SearchRecruitmentListUI* searchListUI = new SearchRecruitmentListUI();
    SearchUI* searchUI = new SearchUI();
    ApplyUI* applyUI = new ApplyUI();
    CancelApplication* cancelApplication = new CancelApplication();
    ShowStatistics* showStatistics = new ShowStatistics();
    ShowApplications* showApplications = new ShowApplications();

    CancelApplicationUI* cancelApplicationUI = cancelApplication->getCancelApplicationUI();
    ShowStatisticsUI* showStatisticsUI = showStatistics->getShowStatisticsUI();
    ShowApplicationsUI* showApplicationsUI = showApplications->getShowApplicationsUI();

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                signinUI->signinUI(in_fp, out_fp, members, &membersCount, companies, &companiesCount);
                break;
            }
            case 2:
            {
                signoutUI->signoutUI(in_fp, out_fp, loginMember, members, &membersCount, companies, &companiesCount);
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
                loginMember = loginUI->loginUI(in_fp, out_fp, members, &membersCount);

                break;
            }
            case 2:
            {
                logoutUI->logoutUI(in_fp, out_fp, loginMember);

                loginMember = NULL;

                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // 3.1 ä�� ���� ���
            {

                registerUI->inputDetails(in_fp, out_fp, loginMember);
                break;
            }

            case 2: // 3.2 ��ϵ� ä�� ���� ��ȸ
            {
                searchListUI->searchRecruitment(out_fp, loginMember);
                break;
            }
            }
        }
            break;
        case 4: {
            switch (menu_level_2)
            {
            case 1:
            {
                // 4.1 ä�� ���� �˻�
                searchUI->enterTerms(in_fp, out_fp, companies, companiesCount);
                break;
            }
            case 2:
            {
                // 4.2 ä�� ����
                applyUI->enterTerms(in_fp, out_fp, companies, companiesCount, loginMember);
                break;
            }
            case 3: // 4.3. ���� ���� ��ȸ
            {
                showApplicationsUI->showAllApplications(in_fp, out_fp, loginMember);

                break;
            }
            case 4: // 4.4. ���� ���
            {
                cancelApplicationUI->selectApplication(in_fp, out_fp, loginMember, companies, companiesCount);
                break;
            }
            }
        }
              break;
        case 5:
        {
            switch (menu_level_2)
            {
            case 1: // 5.1. ���� ���� ���
            {
                showStatisticsUI->printStatistics(in_fp, out_fp, loginMember);
                break;
            }
            }
        }
            break;
        case 6:
        {
            switch (menu_level_2)
            {
            case 1: // 6.1. ����
            {
                fprintf(out_fp, "6.1. ����\n");
                is_program_exit = 1;
                break;
            }
            }
        }
        }
    }
    return 0;
}