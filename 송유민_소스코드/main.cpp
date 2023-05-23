#define _CRT_SECURE_NO_WARNINGS
#include "CancelApplication.h"
#include "ShowApplications.h"
#include "ShowStatistics.h"



// ��� ����
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//�Լ� ����
void program_exit();

//���� ����

int main()
{
	Person* person = new Person();
	Member* loginMember = person;
	Company* company = new Company();
	Company* companies[100];
	companies[0] = company;


	FILE* inputFile = fopen(INPUT_FILE_NAME, "r+");
	FILE* outputFile = fopen(OUTPUT_FILE_NAME, "w+");

	//CancelApplication�� controll, boundary Ŭ���� ����
	CancelApplication* cancelApplication = new CancelApplication();
	CancelApplicationUI* cancelApplicationUI = cancelApplication->getCancelApplicationUI();

	//ShowStatistics�� controll, boundary Ŭ���� ����
	ShowStatistics* showStatistics = new ShowStatistics();
	ShowStatisticsUI* showStatisticsUI = showStatistics->getShowStatisticsUI();

	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fscanf(inputFile, "%d %d ", &menu_level_1, &menu_level_2);


		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 4:
		{
			switch (menu_level_2)
			{
			case 3: // "4.3. ���� ���� ��ȸ" �޴� �κ�
			{

				break;
			}
			case 4: // "4.4. ���� ���" �޴� �κ�
			{
				cancelApplicationUI->selectApplication(inputFile, outputFile, loginMember, companies);
				break;
			}
			}
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1: // "5.1. ���� ���� ���" �޴� �κ�
			{
				showStatisticsUI->printStatistics(inputFile, outputFile, loginMember);
				break;
			}
			}
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1: // "6.1. ���ᡰ �޴� �κ�
			{

				program_exit();
				is_program_exit = 1;
				break;;
			}
			}
		}

		}
	}
	return 0;
}

void program_exit()
{
	
}