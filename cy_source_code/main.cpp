// 헤더 선언
#include <stdio.h>
#include <string.h>
#include "Search.h"
#include "Recruitment.h"
#include "Company.h"
#include "Person.h"
#include "Apply.h"

// 상수 선언
// #define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void search();
void apply();
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    //
    //Person* personList[100];
    //Company* companyList[100];
    doTask();

    //

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: {   // "1.1. 회원가입“
                // join() 함수에서 해당 기능 수행 
                // join();
                break;
            }
            case 2: {
                //
                break;
            }
            }
        }
        case 4: {
            switch (menu_level_2) {
            case 1: { // 4.1 채용 정보 검색
                search();
                break;
            }
            case 2: {// 4.2 채용 지원
                apply();
                break;
            }
            }
        }
        case 6: {
            switch (menu_level_2) {
            case 1: {   // "6.1. 종료“ 메뉴 부분
                //
                program_exit();
                is_program_exit = 1;
                break;
            }
            }

        }
        }
    }

    return;
}

void search() { // search -> Company -> Recruitment / search -> select 대신

    // char user_type[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING],
    //    address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // char companyName[MAX_STRING], companyNum[MAX_STRING], task[MAX_STRING], numPeople[MAX_STRING], applyDeadline[MAX_STRING];

    string companyName, task, applyDeadline;
    int companyNum, numPeople;

    // 입력 형식
    // fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
    fscanf(in_fp, "%s", companyName);

    Search search;

    Recruitment result = search.searchRecruitmentByCompanyName(companyName);

    companyName = result.getCompanyName();
    companyNum = result.getCompanyNum();
    task = result.getTask();
    numPeople = result.getNumPeople();
    applyDeadline = result.getApplyDeadline();

    // 출력 형식
    // fprintf(out_fp, "1.1. 회원가입\n");
    // fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
    fprintf(out_fp, "4.1. 채용 정보 검색\n");
    fprintf(out_fp, "%s %d %s %d %s\n", companyName, companyNum, task, numPeople, applyDeadline);
}

void apply() {

    int companyNum;
    string companyName, task;

    fscanf(in_fp, "%s", companyNum);

    Apply apply;

    Application result = apply.apply(companyNum);

    companyName = result.getCompanyName();
    companyNum = result.getCompanyNum();
    task = result.getTask();

    fprintf(out_fp, "4.2. 채용 지원\n");
    fprintf(out_fp, "%s %d %s\n", companyName, companyNum, task);
}

void program_exit()
{
    fprintf(out_fp, "6.1. 종료\n");
}
