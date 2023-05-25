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

FILE* in_fp, *out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    Member* loginMember;

    // Recruitment* recruitments[100];
    // int recruitmentsCount = 0;

    Company* companies[100];
    int companiesCount = 0;

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    RegisterRecruitmentUI* registerUI = new RegisterRecruitmentUI();
    SearchRecruitmentListUI* searchListUI = new SearchRecruitmentListUI();

    while(!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 3:
            {
                switch(menu_level_2)
                {
                    case 1: // "3.1 채용 정보 등록" 메뉴 부분
                    {
                        registerUI->inputDetails(in_fp, out_fp, companies, companiesCount, loginMember);
                        break;
                    }

                    case 2: // "3.2 등록된 채용 정보 조회" 메뉴 부분
                    {
                        searchListUI->searchRecruitment(out_fp, loginMember);
                        break;
                    }
                }
            }

            case 6:
            {
                switch (menu_level_2)
                {
                case 1: // "6.1. 종료" 메뉴 부분
                {

                    fprintf(out_fp, "6.1. 종료\n");
                    is_program_exit = 1;
                    break;;
                }
                }
            }
        }
    }
    return 0;
}