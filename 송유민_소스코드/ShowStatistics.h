#include<iostream>
#include<unordered_map>
using namespace std;

class ShowStatistics;
class Member;

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
	void printStatistics(FILE* inputFile, FILE* outputFile, Member* member);
};

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