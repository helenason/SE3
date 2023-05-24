#pragma once
#include <iostream>
#include <string>
#include "ShowStatistics.h"
#include "Member.h"

using namespace std;

class ShowStatistics;

/*
	클래스 이름 :
	기능	  :
*/
class ShowStatisticsUI
{
private:
	ShowStatistics* showStatistics;
public:
	ShowStatisticsUI(ShowStatistics* showStatistics);
	void printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember);
};