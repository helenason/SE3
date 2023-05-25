#pragma once
#include <iostream>
#include <string>
#include "Company.h"
#include "Search.h"
using namespace std;
class Search;

class SearchUI {
private:
	Search* search;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount);
};