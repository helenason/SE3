#include<iostream>
#include<unordered_map>
using namespace std;

class ShowStatistics;
class Member;

/*
	Ŭ���� �̸� :
	���	  :
*/
class ShowStatisticsUI
{
private:
	ShowStatistics* showStatistics;
public:
	ShowStatisticsUI(ShowStatistics* showStatistics);
	void printStatistics(FILE* inputFile, FILE* outputFile, Member* member);
};

/*
	Ŭ���� �̸� :
	���	  :
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