#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Entities.h"

using namespace std;

class Member;

/*
	�Լ� �̸� : ShowStatisticsUI::printStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowStatisticsUI::printStatistics(FILE* inputFile, FILE* outputFile, Member* member)
{
	
	unordered_map<string, int> unorderedMap = showStatistics->printStatistics(member);

	
	fprintf(outputFile, "5.1 ���� ���� ���\n");
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
	�Լ� �̸� : ShowStatisticsUI::ShowStatisticsUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/

ShowStatisticsUI::ShowStatisticsUI(ShowStatistics* showStatistics)
{
	this->showStatistics = showStatistics;
}


/*
	�Լ� �̸� : ShowStatistics::printStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
unordered_map<string, int> ShowStatistics::printStatistics(Member* member)
{
	return member->getStatistics();
}

/*
	�Լ� �̸� : ShowStatistics::ShowStatistics()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ShowStatistics::ShowStatistics()
{
	showStatisticsUI = new ShowStatisticsUI(this);
}

/*
	�Լ� �̸� : ShowStatistics::getShowStatisticsUI()
	���	  :
	���� ���� : ����
	��ȯ��    : ����
*/
ShowStatisticsUI* ShowStatistics::getShowStatisticsUI()
{
	return showStatisticsUI;
}