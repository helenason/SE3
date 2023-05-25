#pragma once
#include <iostream>
#include <string>
#include "Search.h"

using namespace std;

class SearchUI {
private:
	Search* search;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount);
};