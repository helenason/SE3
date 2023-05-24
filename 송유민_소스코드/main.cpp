#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "CancelApplication.h"
#include "ShowApplications.h"
#include "ShowStatistics.h"
#include "Member.h"
#include "Application.h"
#include "ApplicationCollection.h"
#include "Company.h"
#include "Person.h"
#include "Recruitment.h"



// ��� ����
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


//���� ����

int main()
{

	Member* members[100];
	int membersCount = 0;

	Person* person = new Person();
	Member* loginMember = person;

	Company* companies[100];
	int companiesCount = 1;

	Company* company = new Company();
	companies[0] = company;


	FILE* inputFile = fopen(INPUT_FILE_NAME, "r+");
	FILE* outputFile = fopen(OUTPUT_FILE_NAME, "w+");

	//CancelApplication�� controll, boundary Ŭ���� ����
	CancelApplication* cancelApplication = new CancelApplication();
	CancelApplicationUI* cancelApplicationUI = cancelApplication->getCancelApplicationUI();

	//ShowStatistics�� controll, boundary Ŭ���� ����
	ShowStatistics* showStatistics = new ShowStatistics();
	ShowStatisticsUI* showStatisticsUI = showStatistics->getShowStatisticsUI();

	//ShowApplications�� controll, boundary Ŭ���� ����
	ShowApplications* showApplications = new ShowApplications();
	ShowApplicationsUI* showApplicationsUI = showApplications->getShowApplicationsUI();

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
				showApplicationsUI->showAllApplications(inputFile, outputFile, loginMember);

				break;
			}
			case 4: // "4.4. ���� ���" �޴� �κ�
			{
				cancelApplicationUI->selectApplication(inputFile, outputFile, loginMember, companies, companiesCount);
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

				fprintf(outputFile, "6.1. ����\n");
				is_program_exit = 1;
				break;;
			}
			}
		}

		}
	}
	return 0;
}
