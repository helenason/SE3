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
    // 파일 입출력을 위한 초기화
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
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
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
            case 1: // 3.1 채용 정보 등록
            {

                registerUI->inputDetails(in_fp, out_fp, loginMember);
                break;
            }

            case 2: // 3.2 등록된 채용 정보 조회
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
                // 4.1 채용 정보 검색
                searchUI->enterTerms(in_fp, out_fp, companies, companiesCount);
                break;
            }
            case 2:
            {
                // 4.2 채용 지원
                applyUI->enterTerms(in_fp, out_fp, companies, companiesCount, loginMember);
                break;
            }
            case 3: // 4.3. 지원 정보 조회
            {
                showApplicationsUI->showAllApplications(in_fp, out_fp, loginMember);

                break;
            }
            case 4: // 4.4. 지원 취소
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
            case 1: // 5.1. 지원 정보 통계
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
            case 1: // 6.1. 종료
            {
                fprintf(out_fp, "6.1. 종료\n");
                is_program_exit = 1;
                break;
            }
            }
        }
        }
    }
    return 0;
}