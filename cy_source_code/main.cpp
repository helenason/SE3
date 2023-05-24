#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Search.h"
#include "Recruitment.h"
#include "Company.h"
#include "Person.h"
#include "Apply.h"
#include "SearchUI.h"
#include "ApplyUI.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void program_exit();

FILE* in_fp, * out_fp;

int main()
{
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    Member* members[100];
    int membersCount = 0;

    Member* loginMember;

    Company* companies[100];
    int companiesCount = 0; // Company Ŭ������ static �����غ���


    SearchUI* searchUI = new SearchUI();
    ApplyUI* applyUI = new ApplyUI();


    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        switch (menu_level_1) {
        case 4: {
            switch (menu_level_2) {
            case 1: { // 4.1 ä�� ���� �˻�
                searchUI->enterTerms(in_fp, out_fp, companies, companiesCount);
                break;
            }
            case 2: { // 4.2 ä�� ����
                applyUI->enterTerms(in_fp, out_fp, companies, companiesCount, loginMember);
                break;
            }
            }
        }
        case 6: {
            switch (menu_level_2) {
            case 1: {   // "6.1. ���ᡰ �޴� �κ�
                program_exit();
                is_program_exit = 1;
                break;
            }
            }

        }
        }
    }

    return 0;
}

// doTask() ����

void program_exit()
{
    fprintf(out_fp, "6.1. ����\n");
}
