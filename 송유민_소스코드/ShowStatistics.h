#pragma once
#include<iostream>
#include<unordered_map>
#include"ShowStatisticsUI.h"

using namespace std;

class ShowStatisticsUI;
class Member;


/*
	클래스 이름 :
	기능	  :
*/
class ShowStatistics
{
private:
	ShowStatisticsUI* showStatisticsUI;
public:
	ShowStatistics();
	ShowStatisticsUI* getShowStatisticsUI();
	unordered_map<string, int> printStatistics(Member* member);
};