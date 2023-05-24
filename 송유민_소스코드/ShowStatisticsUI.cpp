#pragma once
#include<string>
#include"ShowStatisticsUI.h"


/*
	�Լ� �̸� : ShowStatisticsUI::printStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember)
{

	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(loginMember);


	fprintf(outputFile, "5.1 ���� ���� ���\n");
	for (auto iter : unorderedMap)
	{
		cout << "iter.first= " << iter.first << " " << "iter.second= " << iter.second << endl;

		if (iter.second > -1)
		{
			const char* task = iter.first.c_str();
			int applicantsNum = iter.second;
			fprintf(outputFile, "> %s %d\n", task, applicantsNum);
		}
	}
	fprintf(outputFile, "\n");
}

/*
	�Լ� �̸� : ShowStatisticsUI::ShowStatisticsUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/

ShowStatisticsUI::ShowStatisticsUI(ShowStatistics* showStatistics)
{
	this->showStatistics = showStatistics;
}