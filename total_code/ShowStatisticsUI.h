#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class ShowStatistics;

/*
	클래스 이름 : ShowStatisticsUI
	기능	  : 지원 정보 통계 부분의 바운더리 클래스로 지원 정보 통계 관련 입출력을 담당한다.
*/
class ShowStatisticsUI
{
private:
	ShowStatistics* showStatistics;
public:
	ShowStatisticsUI(ShowStatistics* showStatistics);
	void printStatistics(FILE* inputFile, FILE* outputFile, Member* loginMember);
};