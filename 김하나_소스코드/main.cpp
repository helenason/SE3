#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Member.h"
#include "Company.h"
#include "Recruitment.h"
#include "RegisterRecruitment.h"
#include "RegisterRecruitmentUI.h"
#include "SearchRecruitmentList.h"
#include "SearchRecruitmentListUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    Member* members[100];
    int membersCount = 0;

    Member* loginMember = new Company(123, "a", "a", "a", "a");
    /*
    Company* companies[100];
    int companiesCount = 1;
    companies[0] = new Company(5, "asdf", "asdf", "idid", "pwpw"); // test case !!
    */
    RegisterRecruitmentUI* registerUI = new RegisterRecruitmentUI();
    SearchRecruitmentListUI* searchListUI = new SearchRecruitmentListUI();

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1 ä�� ���� ���" �޴� �κ�
            {
                registerUI->inputDetails(in_fp, out_fp, loginMember);
                break;
            }

            case 2: // "3.2 ��ϵ� ä�� ���� ��ȸ" �޴� �κ�
            {
                searchListUI->searchRecruitment(out_fp, loginMember);
                break;
            }
            }
        }
            break;

        case 6:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. ����" �޴� �κ�
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