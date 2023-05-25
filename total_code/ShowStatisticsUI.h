#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class ShowStatistics;

/*
	Ŭ���� �̸� : ShowStatisticsUI
	���	  : ���� ���� ��� �κ��� �ٿ���� Ŭ������ ���� ���� ��� ���� ������� ����Ѵ�.
*/
class ShowStatisticsUI
{
private:
	ShowStatistics* showStatistics;
public:
	ShowStatisticsUI(ShowStatistics* showStatistics);
	void printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember);
};