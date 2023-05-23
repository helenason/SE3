//헤더 선언
#include<stdio.h>
#include<string.h>

//상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//함수 선언
void doTask();
void program_exit();
void signin();
void signout();
void login();
void logout();

//변수 선언
FILE* in_fp, * out_fp;

int main() {
	//파일 입출력을 위한 초기화
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask() {
	//메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		//입력 파일에서 메뉴 숫자 2개를 읽기
		fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:
                signin();
                break;
            case 2:
                signout();
                break;
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
                login();
                break;
            case 2:
                logout();
                break;
            }
            break;
        }
        }
	}

    return;
}

void program_exit() {}