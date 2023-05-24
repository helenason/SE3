#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Member.h"

using namespace std;



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