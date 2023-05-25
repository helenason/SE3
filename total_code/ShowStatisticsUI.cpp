#pragma once
#include<string>
#include<unordered_map>
#include "ShowStatisticsUI.h"
#include "Member.h"
#include "ShowStatistics.h"

/*
	�Լ� �̸� : ShowStatisticsUI::printStatistics()
	���	  : ��� ���� ���
	���� ���� : FILE* inputFile, FILE* outputFile, Member* loginMember
	��ȯ��    : ����
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember)
{

	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(loginMember);


	fprintf(outputFile, "5.1. ���� ���� ���\n");
	for (auto iter : unorderedMap)
	{

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
	���	  : ShowStatisticsUI�� �����ڷ� ��Ʈ�� Ŭ������ ShowStatistics Ÿ���� ���ڷ� �޾�
			   ��������� showStatistics�� �Ҵ��Ѵ�.
	���� ���� : ShowStatistics* showStatistics
	��ȯ��    : ����
*/

ShowStatisticsUI::ShowStatisticsUI(ShowStatistics* showStatistics)
{
	this->showStatistics = showStatistics;
}