#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Member.h"
#include "ShowStatisticsUI.h"

using namespace std;

/*
	�Լ� �̸� : ShowStatistics::printStatistics()
	���	  : �� ȸ���� ��� ����(ȸ�� ȸ��: ������ ������ ��, �Ϲ� ȸ��: ������ ���� Ƚ��)
			   �� ��ȯ�Ѵ�.
	���� ���� :  Member* member
	��ȯ��    : �� ȸ���� ��� ������ ��� Map(key: ����, value: ������ ��/���� Ƚ��)
*/
unordered_map<string, int> ShowStatistics::printStatistics(Member* member)
{
	return member->getStatistics();
}

/*
	�Լ� �̸� : ShowStatistics::ShowStatistics()
	���	  : �����ڷ� ShowStatisticsUI Ÿ���� ��������� �ڽ��� ���ڷ� �ѱ� ShowStatisticsUI�� �����ڸ� ȣ���Ѵ�. 
	���� ���� : ����
	��ȯ��    : ����
*/
ShowStatistics::ShowStatistics()
{
	showStatisticsUI = new ShowStatisticsUI(this);
}

/*
	�Լ� �̸� : ShowStatistics::getShowStatisticsUI()
	���	  : ShowStatisticsUI* Ÿ���� ������� showStatisticsUI
	���� ���� : ����
	��ȯ��    : ShowStatisticsUI* Ÿ���� ������� showStatisticsUI
*/
ShowStatisticsUI* ShowStatistics::getShowStatisticsUI()
{
	return showStatisticsUI;
}