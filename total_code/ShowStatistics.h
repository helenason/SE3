#pragma once
#include<iostream>
#include<unordered_map>
#include "Member.h"

using namespace std;

class ShowStatisticsUI;

/*
	클래스 이름 : ShowStatistics
	기능	  : 지원 정보 통계의 컨트롤 클래스로 멤버 함수들을 통해 각 회원들의 통계 정보를 가져오는 기능을 담당한다.
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