#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Member.h"

using namespace std;



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