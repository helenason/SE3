#pragma once
#include<iostream>
#include<unordered_map>
#include "Member.h"

using namespace std;

class ShowStatisticsUI;

/*
	Ŭ���� �̸� : ShowStatistics
	���	  : ���� ���� ����� ��Ʈ�� Ŭ������ ��� �Լ����� ���� �� ȸ������ ��� ������ �������� ����� ����Ѵ�.
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