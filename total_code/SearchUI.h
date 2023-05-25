#pragma once
#include <iostream>
#include <string>
#include "Search.h"

using namespace std;
/*
* 클래스 이름 : SearchUI
* 클래스 기능 : control 클래스로서 검색어를 입력받고 검색 결과를 출력
*/
class SearchUI {
private:
	Search* search;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount);
};