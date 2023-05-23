#define _CRT_SECURE_NO_WARNINGS
#include "CancelApplication.h"
#include "ShowApplications.h"
#include "ShowStatistics.h"



// 상수 선언
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//함수 선언
void program_exit();

//변수 선언

int main()
{
	Person* person = new Person();
	Member* loginMember = person;
	Company* company = new Company();
	Company* companies[100];
	companies[0] = company;


	FILE* inputFile = fopen(INPUT_FILE_NAME, "r+");
	FILE* outputFile = fopen(OUTPUT_FILE_NAME, "w+");

	//CancelApplication의 controll, boundary 클래스 생성
	CancelApplication* cancelApplication = new CancelApplication();
	CancelApplicationUI* cancelApplicationUI = cancelApplication->getCancelApplicationUI();

	//ShowStatistics의 controll, boundary 클래스 생성
	ShowStatistics* showStatistics = new ShowStatistics();
	ShowStatisticsUI* showStatisticsUI = showStatistics->getShowStatisticsUI();

	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fscanf(inputFile, "%d %d ", &menu_level_1, &menu_level_2);


		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 4:
		{
			switch (menu_level_2)
			{
			case 3: // "4.3. 지원 정보 조회" 메뉴 부분
			{

				break;
			}
			case 4: // "4.4. 지원 취소" 메뉴 부분
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
			case 1: // "5.1. 지원 정보 통계" 메뉴 부분
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
			case 1: // "6.1. 종료“ 메뉴 부분
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