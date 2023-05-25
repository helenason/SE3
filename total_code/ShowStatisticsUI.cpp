#pragma once
#include<string>
#include<unordered_map>
#include "ShowStatisticsUI.h"
#include "Member.h"
#include "ShowStatistics.h"

/*
	함수 이름 : ShowStatisticsUI::printStatistics()
	기능	  : 통계 정보 출력
	전달 인자 : FILE* inputFile, FILE* outputFile, Member* loginMember
	반환값    : 없음
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember)
{

	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(loginMember);


	fprintf(outputFile, "5.1. 지원 정보 통계\n");
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
	함수 이름 : ShowStatisticsUI::ShowStatisticsUI()
	기능	  :
	전달 인자 : ShowStatistics* showStatistics
	반환값    : 없음
*/

ShowStatisticsUI::ShowStatisticsUI(ShowStatistics* showStatistics)
{
	this->showStatistics = showStatistics;
}