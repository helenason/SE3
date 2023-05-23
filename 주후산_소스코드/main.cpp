//��� ����
#include<stdio.h>
#include<string.h>

//��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//�Լ� ����
void doTask();
void program_exit();
void signin();
void signout();
void login();
void logout();

//���� ����
FILE* in_fp, * out_fp;

int main() {
	//���� ������� ���� �ʱ�ȭ
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask() {
	//�޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		//�Է� ���Ͽ��� �޴� ���� 2���� �б�
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