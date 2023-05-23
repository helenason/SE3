#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Entities.h"

using namespace std;

class Member;

/*
	함수 이름 : ShowStatisticsUI::printStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* member)
{
	
	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(member);

	
	fprintf(outputFile, "5.1 지원 정보 통계\n");
	for (auto iter : unorderedMap)
	{
		cout << "iter.first= " << iter.first<<" " << "iter.second= " << iter.second << endl;

		if (iter.second > -1)
		{
			const char* task = iter.first.c_str();
			fprintf(outputFile, "> %s %d\n", task, iter.second);
		}
	}
	
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


/*
	함수 이름 : ShowStatistics::printStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
unordered_map<string, int> ShowStatistics::printStatistics(Member* member)
{
	return member->getStatistics();
}

/*
	함수 이름 : ShowStatistics::ShowStatistics()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ShowStatistics::ShowStatistics()
{
	showStatisticsUI = new ShowStatisticsUI(this);
}

/*
	함수 이름 : ShowStatistics::getShowStatisticsUI()
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
ShowStatisticsUI* ShowStatistics::getShowStatisticsUI()
{
	return showStatisticsUI;
}