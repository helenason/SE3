#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "ShowStatistics.h"
#include "Member.h"
#include "ShowStatisticsUI.h"

using namespace std;

/*
	함수 이름 : ShowStatistics::printStatistics()
	기능	  : 각 회원의 통계 정보(회사 회원: 업무별 지원자 수, 일반 회원: 업무별 지원 횟수)
			   를 반환한다.
	전달 인자 :  Member* member
	반환값    : 각 회원의 통계 정보가 담긴 Map(key: 업무, value: 지원자 수/지원 횟수)
*/
unordered_map<string, int> ShowStatistics::printStatistics(Member* member)
{
	return member->getStatistics();
}

/*
	함수 이름 : ShowStatistics::ShowStatistics()
	기능	  : 생성자로 ShowStatisticsUI 타입의 멤버변수에 자신을 인자로 넘긴 ShowStatisticsUI의 생성자를 호출한다. 
	전달 인자 : 없음
	반환값    : 없음
*/
ShowStatistics::ShowStatistics()
{
	showStatisticsUI = new ShowStatisticsUI(this);
}

/*
	함수 이름 : ShowStatistics::getShowStatisticsUI()
	기능	  : ShowStatisticsUI* 타입의 멤버변수 showStatisticsUI
	전달 인자 : 없음
	반환값    : ShowStatisticsUI* 타입의 멤버변수 showStatisticsUI
*/
ShowStatisticsUI* ShowStatistics::getShowStatisticsUI()
{
	return showStatisticsUI;
}