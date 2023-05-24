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
    int companiesCount = 0; // Company 클래스의 static 생각해보기


    SearchUI* searchUI = new SearchUI();
    ApplyUI* applyUI = new ApplyUI();


    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        switch (menu_level_1) {
        case 4: {
            switch (menu_level_2) {
            case 1: { // 4.1 채용 정보 검색
                searchUI->enterTerms(in_fp, out_fp, companies, companiesCount);
                break;
            }
            case 2: { // 4.2 채용 지원
                applyUI->enterTerms(in_fp, out_fp, companies, companiesCount, loginMember);
                break;
            }
            }
        }
        case 6: {
            switch (menu_level_2) {
            case 1: {   // "6.1. 종료“ 메뉴 부분
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

// doTask() 삭제

void program_exit()
{
    fprintf(out_fp, "6.1. 종료\n");
}
