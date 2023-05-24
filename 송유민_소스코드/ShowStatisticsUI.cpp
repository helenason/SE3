#pragma once
#include<string>
#include"ShowStatisticsUI.h"


/*
	함수 이름 : ShowStatisticsUI::printStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember)
{

	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(loginMember);


	fprintf(outputFile, "5.1 지원 정보 통계\n");
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
	함수 이름 : ShowStatisticsUI::ShowStatisticsUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/

ShowStatisticsUI::ShowStatisticsUI(ShowStatistics* showStatistics)
{
	this->showStatistics = showStatistics;
}